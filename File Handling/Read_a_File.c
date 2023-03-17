/******************************************************************************

Read a file......

Output: 
file can't opened 

Output:
I am the content of the file

*******************************************************************************/
#include <stdio.h>


int main()
{
FILE* ptr;
char ch;
ptr = fopen("krct.txt", "r");
if (NULL == ptr) {
printf("file can't be opened \n");
}
printf("\n");
do {
ch = fgetc(ptr);
printf("%c", ch);
} while (ch != EOF);
fclose(ptr);
return 0;
}

