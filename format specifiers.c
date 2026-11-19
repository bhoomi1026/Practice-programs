#include <stdio.h>

int main() 
{
  int a = 25;
  unsigned int b = 300;
  char ch = '2';
  float f = 5.75f;
  double d = 123.456789;
  long int li = 1234567890L;
  char str[] = "Hello C";
  
printf("Integer: %d\n", a);
printf("Unsigned: %u\n", b);
printf("Character: %c\n", ch);
printf("Float: %lf\n", f);
printf("Double: %lf\n", d);
printf("Long int: %ld\n", li);
printf("String (%s): %s\n", str, str);
printf("Hex (%x): %x\n", a, a);
printf("Octal (%o): %o\n", a, a);
printf("Address: %p\n", (void *)&a);
printf("Percent (%%): %%\n");

return 0;
}


