#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct summertourisam {
    char name[20];
    char gen[6];
    int age;
    struct summertourisam* link;
} tour;

tour* start = NULL;


void heading();
void details();
void inter();
void india();
void receipt();


int k, amount;
char type[60], place[30], date[20];


void main()
{
    int a;

    
    heading();

    
    printf("1. International "
           "Tour Packages\n");
    printf("2. India Tour Packages\n");
    printf("Enter Choice: ");
    scanf("%d", &a);
    switch (a) {
    
    case 1:
        inter();
        break;

    
    case 2:
        india();
        break;

    default:
        printf("Enter Right Choice...");
        break;
    }

    
    details();

    
    receipt();
}


void india()
{
    int a;

    
    system("cls");

    
    heading();
    strcpy(type, "India Tour Package");
    printf("1. Simla Tour Packages    "
           "6 Days 7 Nights (18880/-)\n");
    printf("2. Kashmir Tour Packages "
           "5 Days 4 Nights (35500/-)\n");
    printf("3. Kolkata Tour Packages "
           "11 Days 10 Nights (10000/-)\n");
    printf("Enter Choice: ");
    scanf("%d", &a);
    if (a == 1) {
        strcpy(place, "Simla Tour");
        amount = 18880;
    }
    else if (a == 2) {
        strcpy(place, "Kashmir Tour");
        amount = 35500;
    }
    else if (a == 3) {
        strcpy(place, "Kolkata Tour");
        amount = 10000;
    }
    else
        printf("Enter Correct Choice...");
}


void inter()
{
    int a;

    
    system("cls");

    
    heading();
    strcpy(type, "International Tour Package");
    printf("1. England Tour Packages "
           "6 Days 7 Nights (28880/-)\n");
    printf("2. Thailand Tour Packages "
           "5 Days 4 Nights (15500/-)\n");
    printf("3. New York Tour Packages "
           "11 Days 10 Nights (567800/-)\n");
    printf("Enter Choice: ");
    scanf("%d", &a);
    if (a == 1) {
        strcpy(place, "England Tour");
        amount = 28880;
    }
    else if (a == 2) {
        strcpy(place, "Thailand Tour");
        amount = 15500;
    }
    else if (a == 3) {
        strcpy(place, "New York Tour");
        amount = 567800;
    }
    else
        printf("Enter Correct Choice...");
}




void details()
{
    int i, a;
    char val[20], gen[6];

    
    system("cls");

    
    heading();
    printf("Enter Number Of "
           "Passengers: ");
    scanf("%d", &k);
    printf("Enter Date "
           "(DD/MM/YY): ");
    fflush(stdin);
    gets(date);
    for (i = 1; i <= k; i++) {
        system("cls");
        heading();
        printf("Enter The %dth "
               "Passenger Name: ",
               i);
        fflush(stdin);
        gets(val);
        printf("Enter The %dth "
               "Passenger Gender: ",
               i);
        fflush(stdin);
        gets(gen);
        printf("Enter The %dth "
               "Passenger Age: ",
               i);
        fflush(stdin);
        scanf("%d", &a);

        
       add_node(val, gen, a);
    }
}


int add_node(char lol[20],char der[6], int b)
{
    Node *newptr = NULL, *ptr;
    newptr = (Node*)malloc(sizeof(Node));
    strcpy(newptr->name, lol);
    strcpy(newptr->gen, der);
    newptr->age = b;
    newptr->link = NULL;
    if (start == NULL)
        start = newptr;
    else {
        ptr = start;
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = newptr;
    }
}


void receipt()
{
    int i, b;
    Node* ptr = start;
    system("cls");
    heading();
    printf("**Take Screenshot "
           "For Further Use**\n");
    for (i = 1; i <= k; i++) {
        printf("%dst Passenger "
               "Name: ",
               i);
        puts(ptr->name);
        printf("%dst Passenger "
               "Gender: ",
               i);
        puts(ptr->gen);
        printf("%dst Passenger "
               "Age: %d\n\n",
               i, ptr->age);
        ptr = ptr->link;
    }
    printf("Selected Type: ");
    puts(type);
    printf("Package: ");
    puts(place);
    printf("Date: ");
    puts(date);
    b = amount * k;
    printf("Total Amount: %d", b);
    printf("\n**Thank You For "
           "registration**");
}


void heading()
{
    printf("***Tourism Package "
           "Management System***\n");
    printf("***Vaccination Certificate "
           "Is Necessary For Travel Purpose***\n\n");
}