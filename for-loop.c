#include <stdio.h>

int main(){
    // Exercise 1
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    int i;
    int sum = 0;
    for (i = 1; i < n + 1; ++i){
      sum = sum + i;
    }
    printf("%d\n", sum);

    // Exercise 2
    int w;
    printf("Enter a positive number: ");
    scanf("%d", &w);

    int h;
    int multiplication = 1;
    for (h = 1; h < n + 1; ++h){
      multiplication = multiplication * h;
    }
      printf("%d\n", multiplication);

}