#include <stdio.h>
#define N 20000
int main()
{
	int n,i,j,t,q,d=0,p,m;
	int a[N];
	scanf("%d\n",&n);
	for(t=0;t<n;t++)
	{
	     scanf("%d%d",&i,&j);
	     for(m=1;m<=i;m++)
	     {
		if(i%m==0&&j%m==0)
		{
			q=m;
		}
		else
		{
			continue;
		}
	     }
	
		a[d]=q;
		d+=1;
		p=i*j/q;
		a[d]=p;
		d+=1;

	 }   
	
	for(t=0;t<2*n;t++)
	{
		printf("%d ",a[t]);
		if((t+1)%2==0)
			printf("\n");

         }
		return 0;
}
		   
