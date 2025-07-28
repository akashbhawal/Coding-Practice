#include<stdio.h>

void Display(char *str)
{
	if(*str!='0')
	{
		printf("%s\n", str+1);
		Display(str+1);
	}
}
int main()
{
	char Arr[20];

	printf("Enter string\n");
	scanf("%s",Arr);

	Display(Arr);
	return 0;
}
