#include <stdio.h>
int f(int *p)
{	int i;
	int i;
	if(n==1)
	{
	    return 0;
	}
	else
	{
	    for(i=2;i<n;i++)
   	    if(n%i==0) break;
	     if(i<n-1)
	     return 0;
	      else return n;
	    }
}

int main()
{
	int n,m,flag=0,t,i,q,p,flag1=0,d=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	 scanf("%d",&n);
	 m=f(n);
	 if(m==n)
	 printf("%d %d\n",n,d);
	 else
	 {
		flag=0,flag1=0;
		for(q=n;f(q)==0;q++)
		{
		   flag++;		
		}
		for(p=n;f(p)==0;p--)
		{
		  flag1++;
		}
		if(flag<flag1)
		printf("%d %d\n",q,flag);
		else
		printf("%d %d\n",p,flag1);
	}
	}
	return 0;
}
		
