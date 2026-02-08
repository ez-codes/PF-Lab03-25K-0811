#include <stdio.h>
int main ()
{
  printf ("Welcome to Programming Fundamentals! Spring 2026.");

  //escape sequences
  printf ("Name:\nSyeda Eman Zehra.\tRoll No:25K-0811\nSection:D\n");

  //declaring int, float, double, and char variables and printing them
  int i = 10;
  float f = 3.14f;
  double d = 2.718;
  char c = 'a';
  printf("int=%d\nfloat=%.2f\ndouble=%.3lf\nchar=%c", i, f, d, c);

  //taking an integer, float, and character as input and displaying them.
  int i;
  float f;
  char c;
  scanf("%d%f %c", &i, &f, &c);
  printf("%d\n%f\n%c", i, f, c);

  //taking a double input and printing it with default, 2 decimal, and 5 decimal precision.
  double decimalnum;
  scanf("%lf", &decimalnum);
  printf("%lf\n%.2lf\n%.5lf", decimalnum, decimalnum, decimalnum);
  return 0;
}
