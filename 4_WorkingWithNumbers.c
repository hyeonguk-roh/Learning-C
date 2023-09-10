#include <stdio.h>
#include <stdlib.h>
#include <math.h> // must include for math based functions

int main()
{
    printf("%f\n", 5.7 + 3.6); // addition
                               // mult is *
                               // division is /
                               // subtraction is -

    printf("%f\n", 5 + 3.6); // a int and float returns a float

    // Math Functions
    printf("%f\n", pow(2, 3));   // exponent pow(a, b) returns a raised to the b power
    printf("%f\n", sqrt(36));    // square root sqrt(a) returns the square root of a
    printf("%f\n", ceil(36.6));  // ceiling ceil(a) rounds a up
    printf("%f\n", floor(36.5)); // floor floor(a) rounds down

    return 0;
}