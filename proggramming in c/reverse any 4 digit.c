#include <stdio.h>


void main() {
    int k,n,s=0;
    printf("\n enter 4 digit number");
    scanf("%d",&n);


    while(n>0)
    {
        k=n%10;
        s=s*10+k;
        n=n/10;
    }
    printf("\n s=%d",s);
}