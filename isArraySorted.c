#include <stdbool.h>
#include <stdio.h>
int main(void) {
int total,a,b;
int userValues[20]; // List of integers from input
scanf("%d",&total);
for(int i=0; i<total;i++){
scanf("%d",&userValues[i]);
}
scanf("%d %d",&a,&b);
for (int i=a-1;i<b;i++){
if(i!=b-1){
	if(userValues[i]>userValues[i+1]){
printf("no\n");
return 0;
}
}
}printf("yes\n");
return 0;
}