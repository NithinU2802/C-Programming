#include <stdio.h>

int main()
{
    int a, sm = 0;
    // ctrl+d to exit Represent logout of interface
    while (1) {
        int d = scanf("%d", &a);
        printf("%d\n",d);
        if (d==-1) {
            break;
        } else {
            sm += a;
        }
    }

    printf("Sum of integers: %d\n", sm);
    return 0;
}
