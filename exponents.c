#include <stdio.h>
#include <math.h>


/*int main(){
    int base;
    int exponent;
    int count = 1;

    printf("Enter the base number:");
    scanf("%d", &base);
    printf("Enter the exponent:"),
    scanf("%d", &exponent);

    int result = base;

    do{
       result= base * result;
       count++;
     } while(count <= exponent - 1);

     printf("%d ^ %d = %d\n", base, exponent, result);
     } */

     int main(){
      int base, exponent;
      int result;
      printf("Enter the base number: ");
      scanf("%d", &base);
      printf("Enter the exponent: ");
      scanf("%d", &exponent);

      result = pow(base, exponent);
      printf("%d to the power of %d= %d", base , exponent, result);
      return 0;
     }

    
