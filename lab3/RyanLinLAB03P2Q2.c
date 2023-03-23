// Ryan Lin 114737153

#include <stdio.h>
#include <float.h>
#include <stdlib.h>

int main(){
    double number;
    double smallest, secondsmallest, thirdsmallest, biggestnum;
    int n, i=0;

    // Get input of n
    printf("Enter a value of n:\n");
    scanf("%d", &n);

    //take the input of first number
    printf("Enter a decimal value:\n");
    scanf("%lf", &number);
    smallest = number;
    printf("Smallest = %.1lf\nSecond smallest = None\nThird smallest = None\n\n", smallest);

    // take input of second number
    printf("Enter a decimal value:\n");
    scanf("%lf", &number);
    if(number > smallest){
        secondsmallest = number;
    }
    else{
        secondsmallest = smallest;
        smallest = number;
    }
    printf("Smallest = %.1lf\nSecond smallest = %.1lf\nThird smallest = None\n\n", smallest, secondsmallest);

    //Take input for third number
    printf("Enter a decimal value:\n");
    scanf("%lf", &number);
    if(number > secondsmallest){
        thirdsmallest = number;
    }
    else{
        thirdsmallest = secondsmallest;
        secondsmallest = number;
    }
    //set the current biggest number to the thirdsmallest
    biggestnum = thirdsmallest;
    printf("Smallest = %.1lf\nSecond smallest = %.1lf\nThird smallest = %.1lf\n\n", smallest, secondsmallest, thirdsmallest);
    
    //loops until i is less than n that was inputed
    for(i = 0; i < n;){
        printf("Enter a decimal value:\n");
        scanf("%lf", &number);    
            
            // if the input number is bigger than i gets reset back to zero
            if (number > thirdsmallest){ 
                biggestnum = number;
                i = 0;
            }
            else if (number >= secondsmallest && number <= thirdsmallest){
                thirdsmallest = number;
                i++;
            }
            else if (number >= smallest && number <= secondsmallest){
                thirdsmallest = secondsmallest;
                secondsmallest = number;
                i++;
            }
            else if (number < smallest){
                thirdsmallest = secondsmallest;
                secondsmallest = smallest;
                smallest = number;
                i++;
            }
            else 
                i++;
        printf("Smallest = %.1lf\nSecond smallest = %.1lf\nThird smallest = %.1lf\n", smallest, secondsmallest, thirdsmallest);
    }
    exit(0);
}