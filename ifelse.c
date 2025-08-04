#include <stdio.h>

 int main() {
     int num1;
     int num2;
     printf("Enter the 1st number: ");
     scanf("%d", &num1);
     printf("Enter the 2nd number: ");
     scanf("%d", &num2);

     if (num1 > num2){
         printf("%d is greater than %d\n", num1, num2);
     } else{
         printf("%d is not greater than %d\n", num1, num2);
     }
    return 0;
 }
