#include <stdio.h>

int main()
{
  char v = -62;

  printf("address=%p, %02x", &v, *(&v) & 0xFF);
  return 0;
}