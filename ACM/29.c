#include <stdio.h>
int main()
{
	int n,a[3][3],i,j,b[3][3];
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
	
		printf("\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	  {
		b[i][j]=a[j][i];
	   printf("%d ",b[i][j]);
	  }
		printf("\n");
	}
	}
}
