#include <stdio.h>
 
int main()
{
    double fah;
    double cel;
    printf ("Enter the Temperature in Celsius: ");
    scanf ("%lf", &cel);
    fah = (9 * cel) / 5 + 32;
    printf ("The Temperature in Fahrenheit is: %.2lf\n",fah);
    return 0;
}