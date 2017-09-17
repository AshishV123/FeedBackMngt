

int pass(int x)
{
    int a,b;
    b=0;
    while(x!=0)
    {
        a=x%10;
        b++;
        x=x/10;
    }
    if(b!=10)
    {
        return 1;
    }
    return 0;
}
