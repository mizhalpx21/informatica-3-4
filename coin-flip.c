#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     srand(time(NULL));
     int coinflip = (rand() % ( 2 + 1));


 if(coinflip==1){printf("heads\n");} else {printf("tails\n");}
}


     