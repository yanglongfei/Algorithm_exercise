#include <stdio.h>
int main()
{
	int n,b,q=0,f,k=0,i,j,t,a[7][2],m[7];
	scanf("%d",&n);
while(n--)
{
	for(i=0;i<7;i++)
	{
	    for(j=0;j<2;j++)
	    {
		scanf("%d",&a[i][j]);
	    }
	     t=a[i][0]+a[i][1];
	     if(t>8)
	      {
		m[i]=t-8;    
	       }
	     else
	      {
		m[i]=0;
	      }
	}
	    f=m[0];
	for(i=0;i<=6;i++)
	{
		if(m[i]!=0)
		{
			q=1;
		}
		if(f<m[i])
		{
			k=i;
			f=m[i];
		}
	}
		if(q==0)
		printf("%d\n",k);
		else
		printf("%d\n",k+1);
}
}   	