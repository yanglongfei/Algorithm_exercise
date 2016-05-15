#include <stdio.h>
#define N 1000
void paixu(char s[][4],int n)
{
	int i,j;
	char (*p)[4],t;
	p=s;
	while(n)
	{
	  for(i=0;i<2;i++)
	  {
		for(j=i+1;j<3;j++)
		{
			if((*p)[i]>(*p)[j])
			{
				t=(*p)[i];
				(*p)[i]=(*p)[j];
				(*p)[j]=t;
			}
		}
	  }
		n--;
		p++;
	}
}
int main()
{
	char a[N][4];
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%s",a[i]);
	paixu(a,n);
	for(i=0;i<n;i++)
	{
	  for(j=0;j<3;j++)
		printf("%c ",a[i][j]);
		printf("\n");
	}
	return 0;
}

	
	
