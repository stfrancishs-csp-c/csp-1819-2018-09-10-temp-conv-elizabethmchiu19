#include <stdio.h>
/* print Fahreinheir-Celcius table version 3*/
int main(void)
{
    int fahr;

    for (fahr = -50; fahr <= 120; fahr = fahr +5)
    {
        printf ("f - %3d c - %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}