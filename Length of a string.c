#include<stdio.h>
int main()
{
	char st[30];
	int i,count=0;
	printf("Enter your string to find the length : ");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		count++;
	}
	printf("The length of string = %d ",count);
	return 0;
}
