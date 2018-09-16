#include<stdio.h>
int find_even(int);
int main()
{
	int k,n,c;
	printf("enter the value of k ");
	scanf("%d",&k);
	c= find_even(k);
	printf("%d",c);
	

	return 0;
}

int find_even(int x)
{
	int n,i,j,m,o=0,v;
	printf("the number of numbers in the sequance is");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<(n-1);i++)
	{
		scanf("%d,",&a[i]);
	}
	printf("-1\n");

	for(j=0;j<(n-1);j++)
	{
		m=a[j]%2;
		if(m==0)
		{
			o=o+1;
		}
	}
	if (o==x)
		{
			for(j=(n-2);j>=0;j--)
			{
				m=a[j]%2;
				if(m==0)
				{
					v=a[j];
					break;
				}
			}
		}
		else 
			v=(-1);

		return v;
	

}