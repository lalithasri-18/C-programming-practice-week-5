#include <stdio.h>
int main()
{
    char st1[30], st2[30];
    int i = 0, same = 1;

    printf("Enter the first string: ");
    gets(st1);

    printf("Enter the second string: ");
    gets(st2);

    while (st1[i] != '\0' || st2[i] != '\0')
    {
        if (st1[i] != st2[i])
        {
            same = 0;
            break;
        }
        i++;
    }

    if (same == 1)
        printf("Both strings are equal\n");
    else
        printf("Both strings are not equal\n");

    return 0;
}

