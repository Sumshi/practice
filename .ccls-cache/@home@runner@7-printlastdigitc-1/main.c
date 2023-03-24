#include <stdio.h>
#include <unistd.h>

int _putchar(char c) { return (write(1, &c, 1)); }

int _putchar(char c);
int times_table(int);

int main(void) {
  times_table(5);
  return (0);
}

int times_table(int n) {
  int i; // Row
  int j; // Column
  int k; // the multiples
  for (j = 0; j <= n; j++) {
    for (i = 0; i <= n; i++) {
      k = (i * j);
      if (k < 10) {
        _putchar(k + 48);
        if (i < (n)) {
          _putchar(',');
          _putchar(' ');
        }
      } else {
        _putchar(k/10 + 48);
        _putchar(k%10 + 48);
        if (i < (n)) {
          _putchar(',');
          _putchar(' ');
        }
      }
    }
    _putchar('\n');
  }

return (0);
}