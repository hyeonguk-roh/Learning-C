#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cubeDouble(double num); // prototyping allows you to declare a function below main and still run it

int main()
{
    double number = 3;
    double numCube = cubeDouble(number);
    printf("%f cubed is %f", number, numCube);
}

double cubeDouble(double num)
{
    return pow(num, 3);
}