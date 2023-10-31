#include <stdlib.h>
#include <stdio.h>

int main() {
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;
   char name1[40], name2[40];
   int rounds;

   int seed, n1w=0,n2w=0;
   scanf("%d", &seed);
   srand(seed);

   scanf("%s %s %d",&name1, &name2, &rounds);
   while(rounds<=0){
      printf("Rounds must be > 0\n");
      scanf("%d", &rounds);
   }printf("%s vs %s for %d rounds\n", name1, name2, rounds);
   for(int round =0; round<rounds;){
      int n1c, n2c;
      n1c = rand()%3; //printf("%d",n1c);
      n2c = rand()%3;
      if(n1c!=n2c){
        round++;
      }
      if(n1c==n2c){
         printf("Tie\n");}
      if(n1c == ROCK && n2c==PAPER) {
         printf("%s wins with paper\n", name2); n2w++;}
      if(n2c == ROCK && n1c==PAPER) {
         printf("%s wins with paper\n", name1); n1w++;}
      if(n1c == SCISSORS && n2c==PAPER) {
         printf("%s wins with scissors\n", name1); n1w++;}
      if(n2c == SCISSORS && n1c==PAPER)  {
         printf("%s wins with scissors\n", name2); n2w++;}
      if(n1c == SCISSORS && n2c==ROCK) {
         printf("%s wins with rock\n", name2); n2w++;}
      if(n2c == SCISSORS && n1c==ROCK)  {
         printf("%s wins with rock\n", name1); n1w++;}
   }printf("%s wins %d and %s wins %d\n", name1,n1w,name2, n2w);

   return 0;

}
