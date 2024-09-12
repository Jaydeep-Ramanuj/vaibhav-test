#include <stdio.h>
struct student
{
    int id;
    char name[20];
    char city[20];
} studentsData[3];

int main()
{
    printf("Hey");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter student %d info", i);
        scanf("%d", &studentsData[i].id);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", studentsData[i].id);
    }
}