
int check2()
{
    int a,b,t1;
    for ( a = 0 ; a <= n ; a++ )
    {
        if(&i[a][0]==0)
        {
            break;
        }
        b = strcmp(&i[a][0],A[n].user) ;
        if(b==0)
        {
            printf("Username already exists\nEnter another one\n\nPress Enter\n");getch();
            signup();
            break ;
        }
    }
}
int change()
{int h;char s[12],r[12];
    printf("Enter new Passsword:");
    scanf("%s",s);
    printf("Confirm your Password:");
    scanf("%s",r);
     h=strcmp(s,A[v].pass2);
            if(h==0)
                {   *A[v].pass1=*s;
                    *A[v].pass2=*r;
                    printf("Your Password is changed\n");}
            else
            {
                printf("Password didn't match");

                printf("\n\nPress\n1 to retry\n2 to continue banking\n");
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
