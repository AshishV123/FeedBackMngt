#include<stdio.h>

int pass(int x)
{
    int a,b;
    while(x!=0)
    {
        a=x%10;
        b++;
        x=x/10;
    }
    if(b>8)
    {
        return 1;
    }
    return 0;
}
