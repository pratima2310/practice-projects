#include <stdio.h>
#include <string.h>

int main(void) {

   const MAX_SIZE = 50;
   char s[MAX_SIZE];
   char modS[MAX_SIZE];
   fgets(s, MAX_SIZE, stdin);
   
   int i=0;
   int len;
   int d=0;
   
   for(int i=0; i<strlen(s); i++){
      if(s[i] != ' '){
         modS[d] = s[i];
         d++;
      }
      modS[d] = 0;
   }
   
   len = strlen(modS) - 1;
   while((strlen(modS)-1) > i){
      if((modS[i++] != modS[len--])){
         printf("not a palindrome: %s", s);
         printf("\n");
         return 0;
      }
   }
   
   printf("palindrome: %s", s);
   printf("\n");
   
   return 0;
}
