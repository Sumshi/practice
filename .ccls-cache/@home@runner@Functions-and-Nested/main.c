#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _abs(int);
int _putchar(char c);

int main (void)
{
   int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
 
  return (0);
}
int _abs(int n)
{
  if (n < 0)
    return(-n);
  return(n);
}



