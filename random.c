#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int diceRoll = (rand() % 6) + 1; // Generates a number between 1 and 6
    printf("You rolled a: %d\n", diceRoll);
    printf("Enter number ");
    return 0;
}