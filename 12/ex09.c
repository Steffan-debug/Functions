#include <stdio.h>
#include <conio.h>
void main()
{
	int num,res=0;
	clrscr();
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d Is prime",num);
	else
		printf("\n%d Is not prime",num);
	getch();
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}