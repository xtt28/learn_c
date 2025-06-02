#include <math.h>
#include <stdio.h>

struct circle {
  float radius;
};

typedef struct circle circle;

float circle_area(circle c) { return M_PI * c.radius * c.radius; }

float circle_circumference(circle c) { return 2 * c.radius * M_PI; }

int main(void) {
  puts("Circle with radius 3");
  circle c = { .radius = 3 };
  printf("Area: %.5f\n", circle_area(c));
  printf("Circumference: %.5f\n", circle_circumference(c));
}
