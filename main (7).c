#include <stdio.h>

int main() {
    float distance;
    printf(" Enter the distance between two cities in Km \n");

    printf("input value of distance");
    scanf("distance=%f", & distance);
    printf("x=%f", distance);


    //in meters
    printf(" The distance between 2 cities in meters=%f \n", distance*1000);

    //in feet
    printf("The distance between 2 cities in feet=%f \n", distance*3280.84);

    //in inches
    printf("The distance between 2 cities in feet in inches=%f \n", distance*39370.1);

    //in cm
    printf("The distance between 2 cities in feet in centimeter=%f \n", distance*100000);
    return 0;
}
