#include<stdio.h>
int main()
{
	int M,N,a;
	float b;
	scanf("%d %d",&M,&N);
	a=N%M;
	if(a==0)
	{
		b=M/N;
		printf("%f",b);

	}
	else
		printf("1");

	return 0;
}