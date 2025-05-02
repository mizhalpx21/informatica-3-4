#include <stdio.h>

int main(){
    printf("Enter a number to define the height of the triangle (number of rows): ");
    int height;
    scanf("%d", &height);

    int u;
    int k;
    for(u = 1; u <= height; u++) {
        for(k = 1; k <= u; k++) {
            printf("*");
        }
        printf("\n");

    }
    //Challenge
    

}
