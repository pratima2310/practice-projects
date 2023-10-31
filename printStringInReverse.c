#include <stdio.h>
#include <string.h>

int main(void) {
   const int in =50;
   char array[in];
   
   while(1){
      fgets(array, in, stdin);
      int length = strlen(array);
        if (length > 0 && array[length - 1] == '\n') {
            array[length - 1] = '\0';
        } 
   if(strcmp(array, "done")==0 || strcmp(array, "Done")==0 || strcmp(array, "d")==0){
      break;
   }
   for(int i=strlen(array)-1;i>=0; i--){
      printf("%c",array[i]);
   }printf("\n");
   }

   return 0;
}
