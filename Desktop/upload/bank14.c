#include"bank14.h"
#include"bank2.h"
#include"bank11.c"
#include"bank4.h"

int signup()
{ int g,t1;system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");

        printf("Name            : ");
        fflush(stdin);
        gets(A[n].name);
        printf("Age             : ");
        scanf("%d",&A[n].age);
        printf("Gender          : ");
        scanf("%s",A[n].gender);
        printf("Address         : ");
        fflush(stdin);
        gets(A[n].address);
        printf("E-mail id       : ");
        fflush(stdin);
        gets(A[n].email);
        printf("Phone No.       : ");
        scanf("%d",&A[n].mob);
        g=mob(A[n].mob);

        if(g==1)
        {printf("Please Enter correct Phone number\n");getche();
        signup();goto c;}
        printf("Username        : ");
        scanf("%s",A[n].user);
        check2();
        printf("Password        : ");
        scanf("%s",A[n].pass1);

        printf("Confirm Password: ");
        scanf("%s",A[n].pass2);
        A[n].l=100;
        A[n].t=clock();
       if((strcmp(A[n].pass1,A[n].pass2))==0)
       {
           printf("\nCongratulations!!!\nYou have successfully signed up\n\n");
           printf("Your account no.:  %5d\n",10000000+4*n);
           printf("Percent Interest given by our Bank is '%d' per 10 second\n",5);
           i[n]=A[n].user;
           n++;
           printf("You are credited with  Rs.100\n");
           printf("\n\nPress Enter to continue");getche();main();
       }
       else
        {printf("\nPassword didn't match \nPlease re-enter the profile ");
            getch();signup();}


         system("cls");
        c:return 0;
         return 0;
}
