#include <stdio.h>
#include <string.h>

int main(void) {

   int n;
   scanf("%d", &n);
   char words[n][20];
   char x[20];
   int cnt = 0;
   
   for(int i=0; i<n; i++){
      scanf("%s", words[i]);
   }
   
   for(int i=0; i<n; i++){
      strcpy(x, words[i]);
      for(int j=0; j<n; j++){
        if(!(strcmp(x, words[j]))){
            cnt++;
         }   
      }
      printf("%s - %d\n", x, cnt);
      cnt=0;
   }
   
   return 0;
}
