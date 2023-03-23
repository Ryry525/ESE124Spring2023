#include <stdio.h>

int main() {
   int n, i;
   int arr[100];

   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&arr[i]);
	  }
      
   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("%d ",arr[i]);
	 }
    // display array in reverse
   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("%d ",arr[i]);
	  }
   printf("\n\n");
}