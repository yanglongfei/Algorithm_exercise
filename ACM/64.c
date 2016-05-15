#include <stdio.h>
int main()
{
	int n,m,a,x,y,t=1;
	scanf("%d",&a);
	while(a--)
	{    t=1;
		scanf("%d%d",&n,&m);
		for(y=0;y<=n;y++)
		{
			x=n-y;
			if(2*x+4*y==m)
			{
				printf("%d %d\n",x,y);
				t=0;
				break;
			}
		}
		if(t==1)
		{
			printf("No answer\n");
		}
	}
		return 0;
}		
			
					
