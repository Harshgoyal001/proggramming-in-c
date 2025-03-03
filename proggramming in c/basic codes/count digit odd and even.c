#include <stdio.h>


void main() {
    int n,k,e=0,d=0;
    printf("\n enter");
    scanf("%d",&n);


    while(n>0)
    {
        k=n%10;
        if(k%2==0)
        e++;
        else
        d++;
        n=n/10;
    }
    printf("\neven=%d",e);
    printf("\nodd=%d",d);
}
