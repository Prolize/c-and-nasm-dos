// note: really better calculator
// huh

#include <stdio.h>

int main() {
   printf("1) addition 2) division 3) multiplication\n");
   int a = 0;
   scanf("%d", &a);
   if(a == 1) {
      float a, b;
      scanf("%g", &a);
      scanf("%g", &b);
      float c = a + b;
      printf("%g", c);
   }
   if(a == 2) {
      float a, b;
      scanf("%g", &a);
      scanf("%g", &b);
      float c = a / b;
      printf("%g", c);
   }
    if(a == 3) {
      float a, b;
      scanf("%g", &a);
      scanf("%g", &b);
      float c = a * b;
      printf("%g", c);
    }
    return 0;
}