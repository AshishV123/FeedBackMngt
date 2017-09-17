#include<stdio.h>


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
                        getch();
                        login();
                    }
                }
                else
                {
                    printf("Email id or Phone No. is Wrong\n");
                    getch();
                    main();
                }

                break;
            case 3:
                signup();
                login();
                break;
            default:
                printf("Enter Correct Choice\n");getch();
        }
        system("cls");printf("                    WELCOME TO NITJ BANK\n                   **********************\n");
        }
        return 0;
}


