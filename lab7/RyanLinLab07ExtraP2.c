#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 30

int main()
{
    FILE *inp1, *inp2, *outp;
    int count1 = 0, count2 = 0, count3;
    int i,j,k;
    float a1[MAX_SIZE], a2[MAX_SIZE], a3[MAX_SIZE * 2];

    if ((inp1 = (fopen("InputExtraP21.txt", "r"))) == NULL)
    {
        printf("the FILE: InputExtraP2_1 does not exist");
        exit(1);
    }
    if ((inp2 = (fopen("InputExtraP22.txt", "r"))) == NULL)
    {
        printf("the FILE: InputExtraP2_2 does not exist");
        exit(1);
    }
    if ((outp = (fopen("OutputExtra2.txt", "w"))) == NULL)
    {
        printf("the FILE: OutputExtra2 cannot be opened");
        exit(1);
    }
    while (fscanf (inp1, "%f", &a1[count1]) != EOF)
	{
		count1++;
	}
	
	while (fscanf (inp2, "%f", &a2[count2]) != EOF)
	{
		count2++;
	}
    //merge the two arrays
    for (i=0; i<count1; i++)
	{
		a3[i] = a1[i];
	}
	j=0;
	for (i=count1; i<count1+count2; i++)
	{
		a3[i] = a2[j];
		j++;
	}
	count3 = count1 + count2;
    
    //using bubble sort to sort the array
    int swap = 1;
    float temp;
    while( swap != 0)
    {
        swap=0;
        for (i=0; i<count3-1; i++)
        {
            if (a3[i+1] < a3[i])
            {
                temp = a3[i];
                a3[i]=a3[i+1];
                a3[i+1] = temp;
                swap=1;
            }
        }  
    }
    //removing duplicates from the array
    for (i=0; i<count3; i++)
	{
		for (j=i+1; j<count3; j++) 
		{
             //checks if duplicate appears and shifts the entire row of numbers left by one index
			if (a3[i] == a3[j])
			{
				for(k=j; k<count3-1; k++)
				{
					a3[k] = a3[k+1];
				}
				count3--;
				j--;
			}
		}	
	}
    for (i=0; i< count3; i++)
    {
        fprintf(outp, "%.2f\n", a3[i]);
    }
    // Close the files
    fclose(inp1);
    fclose(inp2);
    fclose(outp);
    return 0;
}
