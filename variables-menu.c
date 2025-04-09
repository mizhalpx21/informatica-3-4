#include <stdio.h>

int main(){
    char snack1[]="Chocolates";
    char sanck2[]="Mazapanes";
    char snack3[]="Gomitas";
    float price1=3.2;
    float price2=2.1;
    float price3=1.9;
    int stock1=50;
    int stock2=30;
    int stock3=100;

    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("1. %s- $%.2f - %d available\n", snack1, price1, stock1);
    printf("2. %s- $%.2f - %d available\n", sanck2, price2,stock2);
    printf("3. %s- $%.2f - %d available\n", snack3, price3, stock3);
    
}

