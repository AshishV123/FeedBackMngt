#include"bank.h"
#include"bank2.h"
#include"bank4.h"
#include"bank11.c"

int main()
{
    int y,g,t,t1,a,b,w,x;
    system("cls");
    while(1){
    printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
    printf("\nPress:\n\n1 Login\n");
    printf("2 Sign Up\n3 for Exit\n");
    fflush(stdin);
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        login();
        break;
    case 2:
        signup();
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("Enter Correct Choice\n");getche();
        }system("cls");
    }
    return 0;
}

int signup()
{ int g,t1;system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");

        printf("Name            : ");
        fflush(stdin);
        gets(A[n].name);
        printf("Age             : ");
        scanf("%d",&A[n].age);
        printf("Gender          : ");
         fflush(stdin);
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
        {printf("Invalid Phone number\n\n\nPress Enter to signup again\n");getche();
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


int  login()
{
    int w,y,h,z,v,ww,nn;system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
    char ee[111];
    printf("Username:");
    scanf("%s",B[m].user1);
    v= check1();
    printf("Password:");
    scanf("%s",B[m].pass3);
    y=strcmp(A[v].pass1,B[m].pass3);
    if(y==0)
    {
        m++;
        ui1(v);
    }
    else
    {
        printf("\nWe don't recogonize you  \nCheck your Username or Password\n");
        printf("Press \n1 for retry \n2 Forgot Password\n3 for Signup Page\n");
        scanf("%d",&z);
        switch(z)
        {
            case 1:
                login();
                break;
            case 2:
                system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
                printf("Enter  your E-mail.id :");
                fflush(stdin);
                gets(ee);
                printf("Enter your Phone No.  :");
                scanf("%d",&nn);
                ww=strcmp(A[v].email,ee);
                if(ww==0 && nn==A[v].mob)
                {

                    printf("Enter new Passsword:");
                    scanf("%s",A[v].pass1);
                    printf("Confirm your Password:");
                    scanf("%s",A[v].pass2);
                    h=strcmp(A[v].pass1,A[v].pass2);
                    if(h==0)
                      {

                        printf("Your Password is changed\n");getch();
                    }else
                    {
                        printf("Password didn't match");
                        getche();
                        login();
                    }
                }
                else
                {
                    printf("Email id or Phone No. is Wrong\n");
                    getche();
                    main();
                }

                break;
            case 3:
                signup();
                login();
                break;
            default:
                printf("Enter Correct Choice\n");getche();
        }
        system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
        }
        return 0;
}



int ui1(int v)
{int c,x,b,j,a,amm;
char u[123];char *p;
int h,k;
    system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
    printf("Welcome %s,\n\n",A[v].name);
    printf("Press:\n1 to see your Profile\n2 to see your current balance\n3 to Withdraw Money\n4 to credit Money\n5 to change your Password\n");
    printf("6 to LogOut\n");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
        system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
        printf("Name        : ");
        puts(A[v].name);
        printf("Age         : ");
        printf("%d\n",A[v].age);
        printf("Gender      : ");
        printf("%s\n",A[v].gender);
        printf("Address     : ");
        puts(A[v].address);
        printf("E-mail id   :");
        puts(A[v].email);
        printf("Phone No.   : %d\n",A[v].mob);
        printf("Account no. : %5d\n",10000000+4*n);
        break;
    case 2:
        system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
        b=(clock()-A[v].t)/10000;
        j=A[v].l+(((A[v].l)*5*b)/100);
        printf("Your Current Balance is:");
        printf("%d",j);
        break;
    case 3:
        system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
        printf("Enter amount you want to withdraw:   ");
        scanf("%d",&a);
        b=(clock()-A[v].t)/10000;
        j=A[v].l+(((A[v].l)*5*b)/100);
        A[v].l=(j)-a;
        if(A[v].l<0)
        {
            A[v].l+=a;
            printf("Not enough Money in your Account\n");
        }
        printf("Remaining balance:%5d",A[v].l);
        break;
    case 4:
        system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
        printf("Enter Money you want to credit in your Account:  ");
        scanf("%d",&a);
        b=(clock()-A[v].t)/10000;
        j=A[v].l+(A[v].l*5*b)/100;
        A[v].l=(j)+a;
        if(A[v].l<0)
        {
            A[v].l-=a;
            printf("Not enough Money in your Account\n");
        }
        printf("Remaining balance:%5d",A[v].l);
        break;
    case 5:
       ch();

        break;
    case 6:
        main();
        break;
    default:
        printf("Enter correct Choice");
    }
    printf("\n\n\nPress :\n1 to continue Banking\n2 to LogOut\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        ui1(v);
    case 2:
        main();
    }
    return 0;
}

int check1()
{
    int a,b,t1;
    for ( a = 0 ; a <= n ; a++ )
    {
        if(&i[a][0]==0)
        {
            break;
        }
        b = strcmp (&i[a][0],B[m].user1) ;
        if(b==0)
        {
            return a;
            break ;
        }
    }
    if(a==n || a==0)
    {
        printf("\nNo such Username present in the Directory\n\nPress Enter to Continue");getche();
        main();
    }
}
int ch()
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
                ch();
                break;}
            case 2:
                ui1(v);
            default:
                printf("Enter correct choice\n");

        }
        }
    return 0;
}


