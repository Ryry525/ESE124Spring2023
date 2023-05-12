#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 32
#define NRC 10

typedef struct 
{
    char Title [LEN];
    int nr_credits;
    char Instructor [LEN];
    int sequence;
} course_info;

void display_courses(course_info *C, int total_num)
{
    int i;
    for (i = 0; i < total_num; i++)
    {
        printf("%s %d %s %d\n", C[i].Title, C[i].nr_credits, C[i].Instructor, C[i].sequence);
    }
}
int main()
{
    course_info COURSES [NRC], aux;
    FILE *f;
    int i = 0;
    int total_NRC, cur_nrc;
    int swapped, x, year;
    if ((f=fopen("courses.txt", "r")) == NULL)
    {
        printf("Error: file courses.txt cannot be opened");
        exit(1);
    }
    while ((fscanf (f, "%s", COURSES[i].Title)) != EOF)
    {
        fscanf (f, "%d", &COURSES[i].nr_credits);
        fscanf (f, "%s", COURSES[i].Instructor);
        fscanf (f, "%d", &COURSES[i].sequence);

        i++;
    }

    total_NRC = i;

   display_courses(COURSES, total_NRC);
    swapped = 1;
    while (swapped == 1)
    {
        swapped = 0;
        for(i=0; i < total_NRC - 1; i++)
        {
            if (strcmp(COURSES[i].Title, COURSES[i+1].Title) > 0)
            {
                swapped = 1;
                aux = COURSES[i];
                COURSES[i] = COURSES[i+1];
                COURSES[i+1] = aux;
            }
            
        }
    }
     printf("\n\n");

    display_courses(COURSES, total_NRC);
    fclose(f);
    while (swapped == 1)
    {
        swapped = 0;
        for(i=0; i < total_NRC - 1; i++)
        {
            if (COURSES[i].sequence > COURSES[i+1].sequence)
            {
                swapped = 1;
                aux = COURSES[i];
                COURSES[i] = COURSES[i+1];
                COURSES[i+1] = aux;
            }
            
        }
    }
    printf("\n\n");
    display_courses(COURSES, total_NRC);

    printf("X: ");
    scanf("%d", &x);

    for (i = 0; i < total_NRC; i++)
    {
        printf("year: %d\n", year);
        cur_nrc = 0;
        while (cur_nrc + COURSES[i].nr_credits <= x)
        {
            printf("%s %d %s %d\n", COURSES[i].Title, COURSES[i].nr_credits, COURSES[i].Instructor, COURSES[i].sequence);
            cur_nrc += COURSES[i].nr_credits;
        }
        printf("\n");
        year++;
    }

}
