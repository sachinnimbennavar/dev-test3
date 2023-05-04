#include <stdio.h>
#include <string.h>

palindrome() {
   char str[100];
   int i, j, flag = 1;
   
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);

   j = strlen(str) - 1;

   for (i = 0; i < j; ++i, --j) {
      if (str[i] != str[j]) {
         flag = 0;
         break;
      }
   }

   if (flag) {
      printf("%s is a palindrome.\n", str);
   }
   else {
      printf("%s is not a palindrome.\n", str);
   }

//   return 0;
}

