#include<stdio.h>
void main()
{
    int s=0;
  
    for (int i=101;i<1000;i++)
    {
    
        if(i%7==0)
        {
            printf("\n%d",i);
            s +=i;
        }
        
    }
    printf("\n sum=%d",s);
}