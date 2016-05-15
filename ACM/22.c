    #include <stdio.h> 
    int fun(int n)  
    {int i;  
     if(n==1)return 0;  
     else {for(i=2;i<n;i++)  
           if(n%i==0)break;  
           if(i<n-1)return 0;  
           else return n;  
     }  
    }  
    int main()  
    {  
        int m,n,k,i,s;  
        int a[1000];  
        scanf("%d",&m);  
        while(m--)  
        {  
            s=0;  
            scanf("%d",&n);  
            for(i=0;i<n;i++)  
                scanf("%d",&a[i]);  
            for(k=0;k<n;k++)  
            s+=fun(a[k]);  
            printf("%d\n",s);  
        }  
    return 0;}  


	      
