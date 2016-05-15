#include <stdio.h>
int main()
{
	int n,p,q,i,t;
	scanf("%d",&n);
	scanf("%d",&p);
	scanf("%d",&q);
	for(t=0;t<n;t++)
	{
	 for(i=1;i<=p;i+=2)
	 printf("%d ",i);
	 printf("\n");
	 for(i=2;i<=p;i+=2)
	 printf("%d ",i);
	 printf("\n");
	 p=q;
	}
}
