// Ryan Lin 114737153

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STRLEN 30

typedef struct
{
    char firstName[STRLEN];
    char lastName[STRLEN];
    int zip;
    int age;
    float GPA;
} studentType;

void PrintDataBase(studentType *database, int size);
void OrderByGPA(studentType *database, int size);
void OrderByLastName(studentType *database, int size);
void DisplayByZipCode(studentType *database, int size, int zip);
void Swap(studentType *s1, studentType *s2);

int main()
{
    FILE *inp;
    int i, numRows;
    char oper;
    int zipcode;
    if ((inp = (fopen("Input.txt", "r"))) == NULL)
    {
        printf("Error: The file Input.txt cannot be opened");
        exit(1);
    }
    studentType *database;
    // get how many students
    fscanf(inp, "%d", &numRows);
    printf("Database Size: %d\n", numRows);

    // dynamic memory allocation
    database = (studentType *)malloc(sizeof(studentType) * numRows);

    for (i = 0; i < numRows; i++)
    {
        fscanf(inp, "%s %s %d %d %f", &database[i].firstName, &database[i].lastName, &database[i].zip, &database[i].age, &database[i].GPA);
    }

    // switch logic
    printf("\nCommands: \nD: Display\nO: Order by GPA \nA: Order by last name \nZ: Search by zipcode \nEnter command: ");
    scanf("%c", &oper);

    switch (oper)
    {
    case 'D':
        case 'd':
        {
        PrintDataBase(database, numRows);
        break;
        }
    case 'O':
        case 'o':
        {
            OrderByGPA(database, numRows);
            printf("\n\nSorting by gpa(descending order):\n");
            PrintDataBase(database, numRows);
            break;
        }
    case 'A':
        case 'a':
        {
            OrderByLastName(database, numRows);
            printf("\n\nSorting by last name(alphabetical order):\n");
            PrintDataBase(database, numRows);
            break;
        }
    case 'Z':
        case 'z':
        {
            printf("Input a zip code you would like to search by: ");
            scanf("%d", &zipcode);
            DisplayByZipCode(database, numRows, zipcode);
            break;
        }
    }

    free(database);

    fclose(inp);
}

void PrintDataBase(studentType *database, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%s %s %d %d %f\n", database[i].firstName, database[i].lastName, database[i].zip, database[i].age, database[i].GPA);
    }
}

void OrderByGPA(studentType *database, int size)
{
    // use bubble sort to sort the entire database based on gpa (database[i].GPA)
    int i, j;

    for(i = 0;i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(database[i].GPA < database[j].GPA)
            {
                Swap(&database[i], &database[j]);
            }
        }
    }
}

void OrderByLastName(studentType *database, int size)
{
    // use bubble sort to sort the entire database based on last name
     int i, j;

    for(i = 0;i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(strcmp(database[i].lastName,database[j].lastName) > 0)
            {
                Swap(&database[i], &database[j]);
            }
        }
    }
}

void DisplayByZipCode(studentType *database, int size, int zip)
{
    printf("\n\nSorting by zipcode:\n");
    int i;
    for (i = 0; i < size; i++)
    {
        if (database[i].zip == zip)
        {
            
            printf("%s %s %d %d %f\n", database[i].firstName, database[i].lastName, database[i].zip, database[i].age, database[i].GPA);
        }
    }
} // swap two elements in database
void Swap(studentType *s1, studentType *s2)
{
    studentType temp;

    strcpy(temp.firstName, s1->firstName);
    strcpy(temp.lastName, s1->lastName);
    temp.zip = s1->zip;
    temp.age = s1->age;
    temp.GPA = s1->GPA;

    // s2 to s1
    strcpy(s1->firstName, s2->firstName);
    strcpy(s1->lastName, s2->lastName);
    s1->zip = s2->zip;
    s1->age = s2->age;
    s1->GPA = s2->GPA;

    // temp to s2 
    strcpy(s2->firstName, temp.firstName);
    strcpy(s2->lastName, temp.lastName);
    s2->zip = temp.zip;
    s2->age = temp.age;
    s2->GPA = temp.GPA;
}
