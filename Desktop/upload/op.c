#include<stdio.h>
void main()
{
    struct node
    {
        int a;struct node *b;
    };
    struct node n;
    n.a=5;
    n.b=NULL;
    printf("%d",n.a);
}
