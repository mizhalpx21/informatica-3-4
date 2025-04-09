#include <stdio.h>

int main(){
    //rectangle
    int height=50;
    int lenght=100;
    printf("Enter the rectangle height:");
    scanf("%d", &height);
    printf("Enter the rectangle lenght:");
    scanf("%d", &lenght);
    int area= height*lenght;
    int perimeter= height+height+lenght+lenght;
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    //temperature
    int fahrenheit;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%d", &fahrenheit);
    int celsius= (fahrenheit-32)/1.8;
    printf("\n%d°F = ", fahrenheit);
    printf("%d°C\n" , celsius);

    //minutes and hours
    int mins=349;
    int hours=mins/60;
    int extramins=mins%60;
    printf("\n%d minutes is equal to", mins);
    printf("%d hours and", hours);
    printf("%d minutes.\n", extramins);

    //circle
    int ratio= 30;
    const float pi= 3.14159;
    int circleArea= pi*(ratio*ratio);
    printf("Area of a circle = %d \n", circleArea);


}