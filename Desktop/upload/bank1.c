#include"bank1.h"
#include<stdio.h>
int ch(int v, struct S A)
{char u[123];char *p;int t,k,h;
     system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
printf("Enter your current Password:");
        scanf("%s",u);
        p=A[v].pass1;
        k=strcmp(p,u);
        if(k==0)
        {
           change();


        }
        else
        {
        printf("Your Password is wrong\n\nPress\n1 to retry\n2 to continue banking\n");
        scanf("%d",&h);
        switch(h)
        {
            case 1:{
                ch(v,A);
                break;}
            case 2:
                ui1(v);
            default:
                printf("Enter correct choice\n");

        }
        }
    return 0;
        }

