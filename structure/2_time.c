#include <stdio.h>

struct time {
  int hours, minutes, seconds;
};

typedef struct time time;

char* time_tostring(time t) {
  char* string;
  asprintf(&string, "%02d:%02d:%02d", t.hours, t.minutes, t.seconds);
  return string;
}

time time_add(time a, time b) {
  time sum;
  sum.hours = a.hours + b.hours;
  sum.minutes = a.minutes + b.minutes;
  sum.seconds = a.seconds + b.seconds;

  sum.minutes += sum.seconds / 60;
  sum.seconds %= 60;
  sum.hours += sum.minutes / 60;
  sum.minutes %= 60;

  return sum;
}

int main(void) {
  time a, b;
  printf("Enter first time: ");
  scanf("%d:%d:%d", &a.hours, &a.minutes, &a.seconds);
  printf("Enter second time: ");
  scanf("%d:%d:%d", &b.hours, &b.minutes, &b.seconds);

  time sum = time_add(a, b);
  printf("Resulting time: %s\n", time_tostring(sum));
}
