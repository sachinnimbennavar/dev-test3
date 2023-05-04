#include <stdio.h>
#include <string.h>

reverse() {
   char str[100];
   int i, j;
   
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);

   j = strlen(str) - 1;

   for (i = 0; i < j; ++i, --j) {
      char temp = str[i];
      str[i] = str[j];
      str[j] = temp;
   }

   printf("Reverse of the string: %s\n", str);

//   return 0;
}

