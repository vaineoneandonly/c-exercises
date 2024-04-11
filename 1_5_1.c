#include <stdio.h>

int main ()

{

    float fahr, celsius;
    float upper, lower, step;

    lower = 0;
    upper = 1000;
    step  = 10;

    celsius = lower;

    while (celsius <= upper)
    {

        fahr = (celsius * 1.8) + 32;
        printf ("%6.1f %8.0f\n", celsius, fahr);
        celsius = celsius + step;

    } 

}
