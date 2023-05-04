#include <stdio.h>

factorial() {
   int num, i;
   unsigned long long fact = 1;
   
   printf("Enter a positive integer: ");
   scanf("%d", &num);

   if (num < 0) {
      printf("Error: Factorial of a negative number doesn't exist.");
   }
   else {
      for (i = 1; i <= num; ++i) {
         fact *= i;
      }

      printf("Factorial of %d = %llu\n", num, fact);
   }

//   return 0;
}

