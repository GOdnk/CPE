#include <stdio.h>
#include <stdlib.h>
// Function to return the absolute value of a number
double absoluteVal(double x)
{
  if (x < 0)
  x = -x;
  return x;
}
// Function to return square root of a number. Uses Newton-Raphson method.
double squareRoot(double x)
{
  const double epsilon =  0.000001; // Value change from 0.01 to  0.000001
  double guess = 1.0;

  while (absoluteVal(guess * guess - x) >= epsilon)

  guess = (x / guess + guess) / 2.0;
  return guess;
}
int main(void)
{
  printf("The square root of 2.0 is %f\n", squareRoot(2.0));

  printf("The square root of 2.0 is %f\n", squareRoot(144.0));

  printf("The square root of 2.0 is %f\n", squareRoot(17.5));
  system("pause"); //ug
return 0;
}
