#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d %d %d",&a,&b,&c);
	d=a-b;
	e=b-c;
	f=c-a;
	if(d!=0&&e!=0&&f!=0)
		printf("1");
	
	else
		printf("0");

	return 0;
}