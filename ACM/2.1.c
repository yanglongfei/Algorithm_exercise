#include <stdio.h>
int main()
{
 	int n,i,j,t,d,r;
 	scanf("%d",&n);
 	for(t=0;t<n;t++)
	{
	   scanf("%d%d",&i,&j);
	    d=i*j;
	   while(j!=0)
	   {
		r=i%j;
		i=j;
		j=r;
	    }
	   printf("%d %d\n",i,d/i);
	}
	return 0;
}
