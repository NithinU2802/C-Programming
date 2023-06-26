/******************************************************************************

Usage of ctype.h header file in c programming...?

1. int isalnum(int c)

2. int isalpha(int c)

3	int iscntrl(int c)

4	int isdigit(int c)

5	int isgraph(int c)

6	int islower(int c)

7	int isprint(int c)

8	int ispunct(int c)

9	int isspace(int c)

10	int isupper(int c)

11	int isxdigit(int c)


*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    scanf("%c",&a);
    printf("I am in LowerCase: %c\n",tolower(a));
    printf("Is I am Digit or alpha..? %d\n",isalnum(a));
    printf("Is I am any ctrl cmd..? %d\n",iscntrl(a));  // to identify \n or \a or \t some other operation 
    printf("Is I am a character of Represent..? %d\n",isgraph(a));  // Represent only character 
    printf("Is I am a Punctuations...! %d\n",ispunct(a));  // Punctuations
    printf("Is I am Space..! %d\n",isspace(a));  // check space 
    printf("Is I am HexaDigit..? %d\n",isxdigit(a)); // Check HexaDecimal
    
    return 0;
}
