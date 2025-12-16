#include <stdio.h>
int main()
{
    char st[30], rev[30];
    int i, len = 0, j = 0;

    printf("Enter your string to reverse: ");
    gets(st);

    for (i = 0; st[i] != '\0'; i++)
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        rev[j] = st[i];
        j++;
    }
    rev[len] = '\0';

    printf("The reversed string = %s\n", rev);

    return 0;
}

