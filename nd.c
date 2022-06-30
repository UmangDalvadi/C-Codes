
#include <stdio.h>

int main()
{
    int i, n, min, max, count = 0;
    float avg;

    printf("Enter no. of student : ");
    scanf("%d", &n);
    printf("\n");
    int marks[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter marks of student %d : ", i + 1);
        scanf("%d", &marks[i]);
        avg += marks[i];
    }
    printf("\n");

    min = marks[0];
    max = marks[0];

    for (i = 1; i < n; i++)
    {
        if (marks[i] < min)
            min = marks[i];
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }
    printf("min marks = %d\nmax marks = %d\navg marks = %f\n\n", min, max, avg / n);

    for (i = 0; i < n; i++)
    {
        if (avg / n < marks[i])
        {
            count++;
        }
    }
    printf("total num. of students secured marks above average marks : %d\n", count);

    int index, temp, j;
    for (i = 0; i < n; i++)
    {
        if (marks[i] == max)
        {
            temp = 1;
            index = i;
        }
    }
    if (temp == 1)
        printf("\nIndex of arr having maximum marks is : %d (means student %d gets maximum marks)\n\n", index, index + 1);

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (marks[i] < marks[j])
            {   
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    printf("top 10 marks from the array\n");

    for (i = 0; i < n && i < 10; ++i)
    {
        printf("top %d : %d\n", i + 1, marks[i]);
    }

    return 0;
}
