//Ryan Lin SBU ID 114737153
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define STR_LENGTH 32

int main()
{
    char number[STR_LENGTH]= "";
    char c;
    int i, j;
    int realNumber = 0;
    float decimalNumber = 0.0;
    float combinedNumber = 0.0;
    float exponentNumber = 0.0;
    float power = 10.0, exponent = 0.0, exponent_number = 0.0;
    float negative = 0.0, exp_negative = 0.0; // if negative = 0, the number is positive
    float sumFloat = 0.0, avgFloat = 0.0;
    int numFloat = 0;
    FILE *inp, *outp;

    //open and initialize files
    if ((inp = (fopen("input_scannerP1Q2.txt", "r"))) == NULL)
    {
        printf("ERROR: FILE input_scanner.txt cannot be opened");
        exit(1);
    }
    if ((outp = (fopen("output_scannerP1Q2.txt", "w"))) == NULL)
    {
        printf("ERROR: File output_scanner.txt cannot be opened");
        exit(1);
    }
    c = fgetc(inp);

    while(c != EOF)
    {
        number[0] = '\0';

        if(c == '+')    //recognize sign
        {    negative = 0.0;
            exp_negative = 0.0;
        }
        else if(c == '-')
        {
            negative = 1.0;
            exp_negative = 1.0;
        }
        else if (c >= '0' && c <= '9')
        {
            i = 0;
            while(c >= '0' && c <= '9')
            {
                number[i] = c;
                i++;
                c = fgetc(inp);
            }//End of while
            number[i] = '\0';
            if (c == '.')
            {
                number[i] = '.';
                i++;
                c = fgetc(inp);
                while (c >= '0' && c <= '9')
                {
                    number[i]= c;
                    i++;
                    c = fgetc(inp);
                } //End of while; this part handles digits after the dot
                number[i]= '\0';
                if (c == 'e' || c == 'E')
                {
                    number[i] = c;
                    i++;
                    c = fgetc(inp);
                    if(c=='+')
                        c = fgetc(inp);
                    else if (c == '-')
                    {
                        number[i] = c;
                        i++;
                        c = fgetc(inp);
                    }
                    while(c >= '0' && c <= '9')
                    {
                        number[i] = c;
                        i++;
                        c = fgetc(inp);
                    }
                    number[i] ='\0';
                }
                
                ungetc(c, inp);
            }
            else if(c == 'e' || c == 'E')
            {
                number[i] = c;
                i++;
                c = fgetc(inp);
                if(c=='+')
                    c = fgetc(inp);
                else if (c == '-')
                {
                    number[i] = c;
                    i++;
                    c = fgetc(inp);
                }
                while(c >= '0' && c <= '9')
                {
                    number[i] = c;
                    i++;
                    c = fgetc(inp);
                }
                    number[i] ='\0';
            }
            ungetc(c, inp); 
        }
        else;

        // convert characters into numbers;
        if(strlen(number) > 0)
        {
            j = 0;
            realNumber = 0;
            decimalNumber = 0.0;
            combinedNumber = 0.0;
            exponent_number = 0.0;
            while(number[j] != '.' && j < (strlen(number)))
            {
                realNumber = realNumber*10 + (number[j] - '0');
                j++;
            }
            combinedNumber += realNumber;

            if (j<strlen(number) && number[j] == '.')
            {
                j++;
                float weight = 0.1;
                while(j<strlen(number)) //digits after the .
                {
                    decimalNumber = decimalNumber + weight*(number[j]-'0');
                    weight *= 0.1;
                    j++;
                }// end of while
                combinedNumber += decimalNumber;
            }
            if ((number[j] == 'E' || number[j] == 'e') && j < (strlen(number)))
                {
                    j++;
                    while(j<strlen(number)){
                    exponent = exponent * 10 + (number[j] - '0');
                    exponent_number *= pow(power,exponent);
                    j++;
                    }
                }

            if (negative == 1)
                combinedNumber *= -1.0; //combinedNumber = combineNumber*-1
            if (exp_negative == 1)
                power = 0.1;
            
            sumFloat += combinedNumber;
            numFloat++; 
            fprintf(outp, "%f\n", combinedNumber);
        } 
        c = fgetc(inp);
        if (c >= '0' && c <='9');
        else
            negative = 0.0;
        
    }//end of while
    if (numFloat != 0 )
    {
        avgFloat = sumFloat/numFloat;
        fprintf(outp, "Sum of all floats = %f\n", sumFloat);
        fprintf(outp, "Average of all floats = %f\n", avgFloat);
        fprintf(outp, "%f", exponent_number);
    }
    fclose(inp);
    fclose(outp);
}