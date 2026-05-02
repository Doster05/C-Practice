#include <stdio.h>
#define CUBIC_IN_PER_POUND 166

int main(){
    int height, width, length, volume, weight;
    
    //? Very odd that in C you have to do something like this for printing a variable 
    
    printf("Enter Box Height: ");
    scanf("%d", &height);
    printf("Enter Box Width: ");
    scanf("%d", &width);
    printf("Enter Box Length: ");
    scanf("%d", &length);

    volume = height * width * length;
    weight = (volume + CUBIC_IN_PER_POUND - 1) / CUBIC_IN_PER_POUND;

    printf("Volume in cubic is: %d\n", volume);
    printf("Weight in pounds is: %d\n", weight);

    return 0;
}