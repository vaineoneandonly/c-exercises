#include <stdio.h>

int main ()
{

    int fahr;

    #define LOWER 0
    #define UPPER 300
    #define STEP 20

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)

        printf ("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

}