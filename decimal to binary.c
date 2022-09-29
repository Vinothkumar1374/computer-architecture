#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],n,i,j;
	system ("cls");
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=0;i>n;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
