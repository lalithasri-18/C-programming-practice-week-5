#include <stdio.h>

int main()
{
    char st[100];
    int i;

    printf("Enter the string: ");
    gets(st);

    for (i = 0; st[i] != '\0'; i++)
    {
        if (st[i] >= 'A' && st[i] <= 'Z')
        {
            st[i] = st[i] + 32;
        }
    }

    printf("String in lowercase = %s\n", st);

    return 0;
}

