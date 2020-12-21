#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int menu();
void showdetails();
void delete ();
int twowheeler();
int threewheeler();
int fourwheeler();
int bike = 0, cycle = 0, rickshaw = 0, car = 0, bus = 0, charge = 0, count = 0;

int main()
{
    while (1)
    {
        system("cls");
        switch (menu())
        {
        case 1:
            twowheeler ();
            break;
        case 2:
            threewheeler ();
            break;
        case 3:
            fourwheeler ();
            break;
        case 4:
            showdetails ();
            break;
        case 5:
            delete ();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid input ! \n"); 
        }
        printf("  ......Press Enter key to continue......\n");
        getch();
    }
    return 0;
}

int menu()
{
    int choice;
    char ch;
    printf("****** WELCOME TO RAJ VEHICLE MANAGEMENT PROGRAM ****** \n\n");
    
    printf("Press '1' for two wheeler entry \n");
    printf("Press '2' for three wheeler entry \n");
    printf("Press '3' for four wheeler entry \n");
    printf("Press '4' for show status \n");
    printf("Press '5' for delete all data \n");
    printf("Press '6' for exit \n\n");
    printf("Enter you choice : \n");
    fflush(stdin);
    scanf("\n %d", &choice);

    if (choice == 1)
    {
        printf("Press 'a' for cycle entry \n"
               "Press 'b' for bike entry \n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'a')
        {
            printf("Your cycle entry is successfully recorded \n\n");
        }
        else if (ch == 'b')
        {
            printf("Your bike entry is successfully recorded \n\n");
        }
        else
        {
            printf("Invalid input ! \n\n");
        }
        twowheeler(ch);
    }

    else if (choice == 2)
    {
        printf("Press 'a' for rickshaw entry \n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'a')
        {
            printf("Your rickshaw entry is successfully recorded \n\n");
        }
        else
        {
            printf("Invalid input ! \n\n");
        }
        threewheeler(ch);
    }

    else if (choice == 3)
    {
        printf("Press 'a' for car entry \n");
        printf("Press 'b' for bus entry \n");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'a')
        {
            printf("Your car entry is successfully recorded \n\n");
        }
        else if (ch == 'b')
        {
            printf("Your bus entry is successfully recorded \n\n");
        }
        else
        {
            printf("Invalid input ! \n\n");
        }
        fourwheeler(ch);
    }

    else if (choice == 5)
    {
        printf("Your data is deleted \n\n");
    }

    return (choice);
}

void showdetails()
{
    printf("\n No. of cycle                = %d", cycle);
    printf("\n No. of bike                 = %d", bike);
    printf("\n No. of rickshaw             = %d", rickshaw);
    printf("\n No. of car                  = %d", car);
    printf("\n No. of bus                  = %d", bus);
    printf("\n Total no. of two wheeler    = %d", cycle + bike);
    printf("\n Total no. of three wheeler  = %d", rickshaw);
    printf("\n Total no. of four wheeler   = %d", car + bus);
    printf("\n Total no. of vehicle        = %d", count);
    printf("\n Total income ammount        = %d", charge);
}

void delete ()
{
    cycle     = 0;
    bike      = 0;
    car       = 0;
    bus       = 0;
    rickshaw  = 0;
    charge    = 0;
    count     = 0;
}

int twowheeler(int x)
{
    switch (x)
    {
    case 'a':
        cycle++;
        charge = charge + 20;
        count++;
        break;

    case 'b':
        bike++;
        charge = charge + 30;
        count++;
        break;
    }
}

int threewheeler(int y)
{
    if (y == 'a')
    {
        rickshaw++;
        charge = charge + 40;
        count++;
    }
}

int fourwheeler(int z)
{
    switch (z)
    {
    case 'a':
        car++;
        charge = charge + 55;
        count++;
        break;

    case 'b':
        bus++;
        charge = charge + 80;
        count++;
        break;
    }
}


