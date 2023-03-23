//Ryan Lin SBU ID 114737153
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 100

int main(){
    FILE *inp, *outp;
    int i=0, num=0;
    int isSwapped=1;
    float var[LENGTH], temp;

    if ((inp = (fopen("InputPart2.txt", "r"))) == NULL){
        printf("The FILE: InputPart2.txt cannot be open\n");
        exit(1);
    }
    if ((outp = (fopen("OutputPart2.txt", "w"))) == NULL){
        printf("The FILE: OutputPart2.txt cannot be open\n");
        exit(1);
    }
    //reads float value from input file and store them into array until end of file
    while (fscanf(inp, "%f", &var[num]) != EOF)
    {
        num++;
    }
    while(isSwapped > 0)
    {
        //stop loop
        isSwapped = 0;
        for (i=0;i<num-1;i++)
       {    
            //if the previous number in the array is larger than the next, swap positions
            if(var[i] > var[i+1])
            {
                temp = var[i+1]; //temp variable hold the value of next position
                var[i+1] = var[i]; //swap the smaller number with the original number
                var[i] = temp; //original number's position is now +1
                isSwapped++;
            }
        }
    }
    //print result to output file
    for(i=0;i<num;i++)
    {

        fprintf(outp, "%.2f", var[i]);
        fprintf(outp, "\n");
    }   
    fclose(inp);
    fclose(outp);
    return 0;
}