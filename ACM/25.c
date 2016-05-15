#include <stdio.h>
#include "stdlib.h"
int isPrime(int num)
{ 
	int i;
    if (num==1) {
        return 0;
    }
    for (i=2; i*i<=num; i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...

    int n,num,numUp,numDown,deltUp,deltDown;
    scanf("%d",&n);
    while (n--) {
        scanf("%d",&num);
        if (isPrime(num)) {
            printf("%d 0\n",num);
        }else{
            numUp=numDown=num;
            while (!isPrime(numUp)) {
                numUp+=1;
            }
            while (!isPrime(numDown)&&numDown>0) {
                numDown-=1;
            }
            deltUp=numUp-num;
            deltDown=num-numDown;
            
            if (numDown==0) {
                printf("%d %d\n",numUp,deltUp);
            }else if (deltUp>=deltDown){
                printf("%d %d\n",numDown,deltDown);
            }else{
                printf("%d %d\n",numUp,deltUp);
            }
        }
    }
    return 0;
}
