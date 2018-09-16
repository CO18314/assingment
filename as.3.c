#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d %d %d",&a,&b,&c);

	d=a+b;
	e=b+c;
	f=c+a;

	if(d>c&&e>a&&f>b)
		printf("1");

	else
		printf("0");

	return 0;
}