#include <stdio.h>
#include <string.h>

int main(void) {
   
   const int in=50;
   char array[in];
   int count=0;
   fgets(array,in, stdin);

     for (int i = 0; i < strlen(array) - 1; i++) {
        

        if(!(array[i] == ' ' || array[i]  == ',' || array[i]  == '.' || array[i] == '!'))
        {
           count++;
        }
    }printf("%d\n",count);
   
   
   return 0;
}