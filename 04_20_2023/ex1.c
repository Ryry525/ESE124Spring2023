#define STRLEN 30
#include <stdio.h>
#include <string.h>
#define SHLEN 3
#define NR_ADDRESSES 10

typedef struct
{
    int number;
    char street [STRLEN];
    char town [STRLEN];
    int zip;
    char state [SHLEN];
} AddressType;

int main(){
AddressType B[NR_ADDRESSES];

int i, Nra = 3;

for(i = 0; i < Nra; i++){
printf("Number: ");
scanf("%d", &B[i].number);

printf("Street: ");
scanf("%s", &B[i].street);
getchar();

printf("Town: ");
scanf("%s", &B[i].town);


printf("Zip: ");
scanf("%d", &B[i].zip);

printf("State: ");
scanf("%s", &B[i].state);
getchar();
}   
for(i=0; i < Nra; i++)
printf("Address: %d %s %s %d %s\n", B[i].number,B[i].street, B[i].town, B[i].zip, B[i].state);
}
