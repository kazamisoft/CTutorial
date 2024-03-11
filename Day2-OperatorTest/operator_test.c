#include <stdio.h>

int main()
{
  int math = 85, english = 80;

  printf("math=%d, english=%d", math, english);

  if (math >= 90 && english >= 90) {
    if (math >= 95 || english >= 95) {
      printf("Super Great");
    }
    else {
      printf("Great\n");
    }
  }
  else if (math >= 80 && english >= 80) {
    if (math >= 85 || english >= 85) {
      printf("So Good");
    }
    else {
      printf("Good\n");
    }
  }
  else {
    printf("Soso\n");
  }
  return 0;
}