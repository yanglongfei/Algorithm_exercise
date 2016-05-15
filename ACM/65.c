#include <stdio.h>
int main()
{
	int a,n,t=1,sum,i,j;
	scanf("%d",&a);
      while(a--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{   t=1;
		   if(i%2==0)
		   {
		    for(j=1;j<i;j=j+2)
		    {	  t*=j;
		    }
			sum+=t;
		  }
		   else
		   {
			for(j=1;j<=i;j=j+2)
			{
				t*=j;
			}
			sum+=t;
		  }
			
		}
		printf("%d\n",sum);
	}
		return 0;
}
