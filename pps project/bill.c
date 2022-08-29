#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct items
{
    char itemName[20];
    float price;
    int qty;
    float total;
};

struct orders
{
    char customer[30];
    char date[10];
    int num_of_item;
    struct items itm[15];
};

typedef struct orders orders;

int main()
{
    int choice, n, sum = 0;
    int c;

    FILE *fp;
    orders ord, temp;

    while (1)
    {
        printf("\n\n\n");
        printf("\033[0;32m");

        printf("\t==========WelCome To our shop==========\t");
        printf("\n\nplease select your prefered operation");
        printf("\n\n1.Generate Bill");
        printf("\n2.show Bill");
        printf("\n3.exit");

        printf("\033[0;33m");
        printf("\n\nyour choice : ");
        scanf("%d", &choice);
        printf("\033[0m");

        fgetc(stdin);
        switch (choice)
        {
        case 1:

            printf("\033[0;32m");
            printf("\nplease enter Name of the customer : ");
            gets(ord.customer);

            strcpy(ord.date, __DATE__);

            printf("\nplease enter the number of items : ");
            scanf("%d", &n);

            int *ptr;
            ptr = (int *)malloc(n * sizeof(int));
            // printf("\033[0m");
            ord.num_of_item = n;
            for (int i = 0; i < n; i++)
            {
                getc(stdin);
                printf("\n\n");

                printf("\033[0;36m");
                printf("please enter the item %d : ", i + 1);
                gets(ord.itm[i].itemName);
                printf("please enter the unit price : ");
                scanf("%f", &ord.itm[i].price);
                printf("please enter the quantity : ");
                scanf("%d", &ord.itm[i].qty);

                printf("this item have any expiry date or not (1/0) : ");
                scanf("%d", &c);
                if (c == 1)
                {
                    printf("please enter expirey month of this item : ");
                    scanf("%d", &ptr[i]);
                }
                else if (c == 0)
                {
                    ptr[i] = 0;
                }

                // printf("month : ");
                // scanf("%d", &);
                // printf("year : ");
                // scanf("%d", &);
                ord.itm[i].total = ord.itm[i].qty * ord.itm[i].price;
            }
            fp = fopen("Data.txt", "w");
            fwrite(&ord, sizeof(ord), 1, fp);
            fclose(fp);
            break;

        case 2:

            fp = fopen("Data.txt", "r");
            while (fread(&temp, sizeof(temp), 1, fp))
            {
                printf("\033[0;32m");
                printf("\nDate : %s", temp.date);
                printf("\nName : %s\t", temp.customer);
                printf("No item : %d\n", temp.num_of_item);
                printf("\033[0m");

                for (int i = 0; i < temp.num_of_item; i++)
                {
                    printf("\nItem Name : %s \tItem Unit Price : %.2f \tQuantity : %d \tTotal : %.2f \t", temp.itm[i].itemName, temp.itm[i].price, temp.itm[i].qty, temp.itm[i].total);
                    if (c == 1)
                    {
                        printf("expiry month : %d ,", ptr[i]);
                    }

                    if (c == 1 && ptr[i] < 7 && ptr[i] != 0)
                    {
                        printf("\033[0;31m");
                        printf("ALERT : ");
                        printf("\033[0m");
                        printf("this item is expired\n");
                    }
                    sum = sum + ord.itm[i].total;
                }
                printf("\033[0;31m");
                printf("=======================================");
                printf("\033[0m");
                printf("\n\nTotal amount you have to pay : %d ", sum);
            }
            // free(ptr);
            fclose(fp);
            break;

        case 3:
            return 0;

        default:
            break;
        }
    }
    return 0;
}