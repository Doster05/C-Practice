#include <stdio.h>
#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0/9.0)

int main(){
    float celciusOutput, farenheitInput;
    
    printf("What is the temperature in Farenheight: ");
    scanf("%f", &farenheitInput);

    celciusOutput = (farenheitInput - FREEZING_PT) * SCALE_FACTOR;

    printf("Celcius Temperature is: %.1f\n", celciusOutput);

    return 0;
}