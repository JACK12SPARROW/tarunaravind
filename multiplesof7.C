#include <stdio.h>
#include<conio.h>

int main(void) 
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
  getch();
	return 0;
}
