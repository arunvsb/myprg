#include<stdio.h>
 
char* encode(char* str1) {
   int i = 0;
 
   while (str1[i] != '\0') {
      str1[i] = str1[i] - 30;  // Subtract 30 From Charcter
      i++;
   }
   return (str1);
}
 
int main() {
 
   char *str1;
 
   printf("\nEnter the String to be Encode : ");
   scanf("%d",&str1);
 
   str1 = encode(str1);
   printf("\nEncoded String : %s", str1);
 
   return 0;
}
