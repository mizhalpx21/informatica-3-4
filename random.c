#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int rolls;
    printf("Enter the number of dice rolls: ");
    scanf("%d", &rolls);
    for(;rolls > 0; -- rolls){
    int diceRoll = (rand() %6) + 1;
    printf("You rolled a: %d\n", diceRoll);}
    return 0;
}