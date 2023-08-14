#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} Set;

Set *createSet() {
    Set *set = (Set *)malloc(sizeof(Set));
    set->size = 0;
    set->capacity = 10;
    set->data = (int *)malloc(set->capacity * sizeof(int));
    return set;
}

void addToSet(Set *set, int value) {
    if (set->size == set->capacity) {
        set->capacity *= 2;
        set->data = (int *)realloc(set->data, set->capacity * sizeof(int));
    }
    set->data[set->size++] = value;
}

int compareIntegers(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int from, to;
    scanf("%d %d", &from, &to);

    Set *allFactors = createSet();

    for (int val = from; val <= to; val++) {
        for (int ctr = 1; ctr <= val; ctr++) {
            if (val % ctr == 0) {
                addToSet(allFactors, ctr);
                if (ctr != val / ctr) {
                    addToSet(allFactors, val / ctr);
                }
            }
        }
    }

    qsort(allFactors->data, allFactors->size, sizeof(int), compareIntegers);

    int prevFactor = -1;

    for (size_t i = 0; i < allFactors->size; i++) {
        if (allFactors->data[i] != prevFactor) {
            printf("%d ", allFactors->data[i]);
            prevFactor = allFactors->data[i];
        }
    }

    free(allFactors->data);
    free(allFactors);

    return 0;
}
