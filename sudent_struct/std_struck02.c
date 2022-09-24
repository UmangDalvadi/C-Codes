#include <stdio.h>

struct student
{
    char name[20];
    char dept[50];
    int enroll;
    int sem;
    float spi;
};

void display(struct student s[])
{
    printf("====================================================\n");
    // for (int i = 0; i < n; i++)

    // {
    //     printf("Name : %s\n", s[i].name);
    //     printf("Department : %s\n", s[i].dept);
    //     printf("Enrollment : %d\n", s[i].enroll);
    //     printf("Semster : %d\n", s[i].sem);
    //     printf("SPI : %.2f\n\n", s[i].spi);
    // }

    FILE *fp;
    fp = fopen("std_data.txt", "r");
    int i = 0;
    while (fread(&s[i], sizeof(struct student), 1, fp))
    {
        if (i < 5)
        {
            printf("Name : %s\nDepartment : %s\nEnrollment : %d\nSemster : %d\nSPI : %.2f\n\n", s[i].name, s[i].dept, s[i].enroll, s[i].sem, s[i].spi);
            i++;
        }
    }
    fclose(fp);
}

int main()
{
    int n;
    printf("\nEnter the number of students : ");
    scanf("%d", &n);
    printf("\n");
    struct student s[n];
    FILE *fp = NULL;
    fp = fopen("std_data.txt", "w");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d : ", i + 1);
        scanf("%s", &s[i].name);
        printf("Enter the department of student %d : ", i + 1);
        scanf("%s", &s[i].dept);
        printf("Enter the Enrollment of student %d : ", i + 1);
        scanf("%d", &s[i].enroll);
        printf("Enter the semester of student %d : ", i + 1);
        scanf("%d", &s[i].sem);
        printf("Enter the SPI of student %d : ", i + 1);
        scanf("%f", &s[i].spi);
        printf("\n");
        // fprintf(fp, "name of student %d : %s \ndepartment of student %d : %s \nEnrollment of student %d : %d \nsemester of student %d : %d \nSPI of student %d : %.2f \n\n", i + 1, s[i].name, i + 1, s[i].dept, i + 1, s[i].enroll, i + 1, s[i].sem, i + 1, s[i].spi);
        fwrite(&s[i], sizeof(struct student), 1, fp);
    }
    fclose(fp);
    int n_exit;
    do
    {
        printf("====================================================\n");
        printf("Enter 1 : to Display students list\n");
        printf("Enter 2 : to Search a student\n");
        printf("Enter 3 : to Sort student with respect to SPI\n");
        printf("Enter 4 : to Edit the details of any students\n");
        printf("Enter 5 : to Delete the details of any student\n");
        printf("Enter 6 : to Exit\n\n");

        printf("Enter : ");
        scanf("%d", &n_exit);
        printf("\n");

        switch (n_exit)
        {
        case 1:

            display(s);

            break;
        case 2:
            printf("====================================================\n");
            int enrollment;
            printf("Enter enrollment number : ");
            scanf("%d", &enrollment);
            for (int i = 0; i < n; i++)
            {
                if (s[i].enroll == enrollment)
                {
                    printf("\nName : %s\n", s[i].name);
                    printf("Department : %s\n", s[i].dept);
                    printf("Enrollment : %d\n", s[i].enroll);
                    printf("Semster : %d\n", s[i].sem);
                    printf("SPI : %.2f\n\n", s[i].spi);
                }
            }
            break;
        case 3:
            printf("====================================================\n");
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (s[j].spi > s[i].spi)
                    {
                        int temp = s[j].spi;
                        s[j].spi = s[i].spi;
                        s[i].spi = temp;
                    }
                }
            }
            for (int i = 0; i < 5; i++)
            {
                printf("Name : %s ,SPI : %.3f\n", s[i].name, s[i].spi);
            }

            break;
        case 4:
            // edit();

        default:
            break;
        }

    } while (n_exit != 6);

    return 0;
}