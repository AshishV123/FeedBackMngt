int pass(char *x)
{
    int a,b;
    b=0;
    while(x!=0)
    {
        a=x%10;
        b++;
        x=x/10;
    }
    if(b<10||b>10)
    {
        return 1;
    }
    return 0;
}

