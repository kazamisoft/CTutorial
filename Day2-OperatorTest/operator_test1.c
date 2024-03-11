#include <stdio.h>
#include <math.h>

int main()
{
  float pi = 3.14;
  int radius = 5;
  float circle_length;
  float circle_area;

  printf("Radius = %d\n", radius);
  circle_length = 2 * pi * radius;
  circle_area = pi * radius * radius;
  printf("Length=%f, Area=%f\n", circle_length, circle_area);

  circle_area = pi * pow(radius, 2);
  printf("Area=%f", circle_area);
  return 0; 
}