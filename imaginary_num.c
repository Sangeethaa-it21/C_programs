#include <stdio.h>
#include <complex.h>

int main()
{

  double complex x = 4.0;
  double real = 9.0;
  double complex num = real + x;
  printf("z = %.1f%+.1f\n", creal(num), cimag(num));

}
