#include<stdio.h>

#include<conio.h>

int choice();

void deposite();

void transfer();

void withdraw();

void checkDetail();

void summary();

int TotalAmount=1000,DepAmo,WitAmo,TraAmo;

int TotalWit=0, TotalDep=0, TotalTra=0;

int AccNum;

char a[50];

void main()

{

    clrscr();

    printf("Enter your name: ");

    gets(a);

    printf("Enter your Acc number: ");

    scanf("%d",&AccNum);

    while(1)

    {

        clrscr();

        switch(choice())

        {

        case 1:

            deposite();

            TotalDep+=DepAmo;

            break;

        case 2:

            withdraw();

            if(WitAmo<=TotalAmount)

                TotalWit+=WitAmo;

            break;

        case 3:

            transfer();

            if(TraAmo<=TotalAmount)

                TotalTra+=TraAmo;

            break;

        case 4:

            checkDetail();

            break;

        case 5:

            clrscr();

            summary();

            getch();

            exit(0);

        default:

            printf("\nInvalid choice");

        }

        getch();

    }

}


int choice()

{

    int ch;

    printf("\n  1. Deposited Amount ");

    printf("\n  2. Withdraw Amount ");

    printf("\n  3. Transfer Amount ");

    printf("\n  4. Check Detail ");

    printf("\n  5. Exit ");

    printf("\n  Enter your choice: ");

    scanf("%d",&ch);

    return(ch);

}



void deposite()

{

    printf("\nEnter the Amount you want to deposite: ");

    scanf("%d",&DepAmo);

    TotalAmount+=DepAmo;

}


void withdraw()

{

    printf("\nEnter the amount you wish to withdraw: ");

    scanf("%d",&WitAmo);

    if(WitAmo<=TotalAmount)

        TotalAmount-=WitAmo;

    else

        printf("\nYour Acc balance is less, withdrawal is not possible\n");

}



void transfer()

{

    printf("\nEnter the amount you want to transfer: ");

    scanf("%d",&TraAmo);

    if(TraAmo<=TotalAmount)

        TotalAmount-=TraAmo;

    else

        printf("\nYour Acc balance is less, transfer is not possible\n");

}



void checkDetail()

{

    printf("\nTotal amount = %d", TotalAmount);

    printf("\nTotal deposited amount = %d",TotalDep);

    printf("\nTotal withdrawal amount = %d",TotalWit);

    printf("\nTotal transferred amount = %d\n",TotalTra);

    getch();

}



void summary()

{

    printf("\n-----------------------------------------");

    printf("\nYour name : %s",a);

    printf("\nAccount number : %d",AccNum);

    printf("\nTotal amount : %d", TotalAmount);

    printf("\nTotal deposited amount : %d",TotalDep);

    printf("\nTotal withdraw amount : %d",TotalWit);

    printf("\nTotal transferred amount : %d",TotalTra);

    printf("\n---------------THANK-YOU----------------");

}
