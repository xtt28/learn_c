#include <stdio.h>

struct Complex {
  float real, imag;
};

typedef struct Complex Complex;

Complex complex_add(Complex a, Complex b) {
  float real = a.real + b.real;
  float imag = a.imag + b.imag;
  Complex result = { real, imag };
  return result;
}

Complex complex_multiply(Complex a, Complex b) {
  float real = a.real * b.real - a.imag * b.imag;
  float imag = a.imag * b.real + a.real * b.imag;
  Complex result = { real, imag };
  return result;
}

void complex_print(Complex z) {
  printf("%.2f + %.2fi\n", z.real, z.imag);
}

int main(void) {
  printf("Enter first number in form a + bi: ");
  Complex first;
  scanf("%f + %fi", &first.real, &first.imag);
  printf("Enter second number in form a + bi: ");
  Complex second;
  scanf("%f + %fi", &second.real, &second.imag);

  printf("Sum: ");
  complex_print(complex_add(first, second));
  printf("Product: ");
  complex_print(complex_multiply(first, second));
}
