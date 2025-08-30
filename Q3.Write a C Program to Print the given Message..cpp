#include<stdio.h>
int main()
{
	char ch[50];
	scanf("%[^\n]s",&ch);
	printf("the str is:%s",ch);
	return 0;
}