#include <stdio.h>
#include <stdlib.h>
#define max_number 15

int main()
{
    int i=0, count = 0;
    float number[max_number], temp;
    FILE *inp, *outp;
    int swap = 1;
    // open and initialize input and output files
    if((inp=(fopen("Input_file.txt", "r"))) == NULL)
    {
        printf("ERROR: the fule input_file.txt cannot be opened");
        exit(1);
    }
    if((outp=(fopen("Output_file.txt", "w"))) == NULL)
    {
        printf("ERROR: the fule output_file.txt cannot be opened");
        exit(1);
    }
    while (fscanf(inp, "%f", &number[count]) != EOF)
    {
        count++;
    }
    //reverse the order
    for(i = count - 1;i >= 0; i--)
    {
        fprintf(outp, "%f ", number[i]);  
    }
    //bubble sort the reversed array
    while( swap != 0)
    {
        swap=0;
        for (i=0; i<count-1; i++)
        {
            if (number[i+1] > number[i])
            {
                temp = number[i];
                number[i]=number[i+1];
                number[i+1] = temp;
                swap=1;
            }
        }  
    }
    for (i=0; i<count; i+=2) 
    //increment index by 2 to show the greatest, then third greatest, and fifth greatest in array
    {
        fprintf (outp, "\n%f", number[i]);
    }    
    fclose(inp);
    fclose(outp);
}