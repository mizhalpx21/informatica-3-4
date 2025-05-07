#include <stdio.h>

int main(){
    int count = 0;
    int n;

    printf("Enter a positive number: ");
    scanf("%d" , &n);

    do{
        n = n / 10;
        // n /= 10

        ++count;
    } while(n !=0);
    printf("Number of digits: %d\n", count);

}
    




