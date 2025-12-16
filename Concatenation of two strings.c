#include <stdio.h>
#include <string.h>
int main()
{
    char st1[60], st2[30];

    printf("Enter the first string: ");
    gets(st1);

    printf("Enter the second string: ");
    gets(st2);

    strcat(st1, st2);

    printf("The concatenated string = %s\n", st1);

    return 0;
}

