//printf from 1 to 10 expect 6
#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==6)
        {
            continue;
        }
        printf("%d\n",i);
    }
    
}