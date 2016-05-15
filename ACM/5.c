#include <stdio.h>
#define N 20
int  f(int n)
{
	long result;
	long pre;
	long last;
	result=pre=1;
	while(n>2)
	{
	    last=pre;
	    pre=result;
	    result=pre+last;
	}
	return result;
}
int main()
{
	int m,a[N],i,t;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{t=f(a[i]);
	printf("%d\n",t);
	}
}
