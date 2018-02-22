#include <stdio.h>
#include<string.h>
void main()
{
	char c[100000];
	printf("enter a character:");
	scanf("%s",c);
	int a=strlen(c)-1;
	while(a!=-1)
	{
		printf("%c",c[a]);
		a--;
	}
}

