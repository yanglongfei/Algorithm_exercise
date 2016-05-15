#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    char a[N][20];
    int i=0;
    while(~scanf("%s",a[i++]))
    	{
    	    ;
    	}
    i--;
    while(--i>=0)
    {
        printf("%s",a[i]);
        printf(" ");
    }

    printf("\n");
}

