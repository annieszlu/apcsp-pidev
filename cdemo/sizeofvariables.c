#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'B';
  float c = 1.2;
  double d = 8.4e+11;
  unsigned int x = 7;
  long int y = 21;

  // print value and size of an int variable
  printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));
  printf("char b value %c and size %d bytes.\n", b, sizeof(b));
  printf("float c value %f and size %d bytes.\n", c, sizeof(c));
  printf("double d value %f and size %d bytes.\n", d, sizeof(d));
  printf("unsigned int x value %d (oct %o, hex %x) and size %d bytes.\n", x, x, x, sizeof(x));
  printf("long int y value %d (oct %o, hex %x) and size %d bytes.\n", y, y, y, sizeof(y));

}


