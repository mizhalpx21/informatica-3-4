#include <stdio.h>
int main(){
    //Exercise 1
    int num1;
    int num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 == num2){
        printf("%d is equal to %d\n", num1, num2);
    } else{
        printf("%d is NOT equal to %d\n", num1, num2);
    }
    //Exercise 2
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number % 2==0){
         printf("%d is an even number", number);
    } else{
        printf("%d is not an even number \n", number);
    }
    //Exercise 3
    int day;
    printf("\n write a number between 1 and 7: ");
    scanf("%d", &day);
    if (day ==1){
    printf("\n it is Sunday");
    }
    if (day ==2){
    printf("\n it is Monday");
    }
    if (day ==3){
     printf("\n it is Tuesday");
    }
    if (day ==4){
     printf("\n it is Wednesday");
        }
    if (day ==5){
     printf("\n it is Thursday");
        }
     if (day ==6){
     printf("\n it is Friday");
        }
    if (day ==7){
    printf("\n it is Saturday");
        }
    //Exercise4
    int number1;
    printf("Enter a number to make a multiplication: ");
    scanf("%d", &number1);
    int number2;
    printf("Enter another number to make a multiplication: ");
    scanf("%d", &number2);
    int multiplication = number1*number2; 
    printf("The result is: %d \n", multiplication);
    return 0;


    }
