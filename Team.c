#include <stdio.h>
#include <string.h>

#include "Team.h"

// TODO: Declare function InitTeam to initialize team
Team InitTeam(){
   Team team;
   team.name[0] = '\0';
   team.wins = 0;
   team.losses = 0;
   return team;
}
Team SetName(char *userName, Team team){
   strcpy(team.name,userName);
   return team;
}
Team SetWins(int userWins, Team team){
   team.wins=userWins;
    return team;
}
Team SetLosses(int userLosses, Team team){
   team.losses=userLosses;
    return team;
}
void GetName(char *userName, Team team){
   strcpy(userName,team.name);
   
}
int GetWins(Team team){
   return team.wins;
}
int GetLosses(Team team){
   return team.losses;
}
double GetWinPercentage(Team team){
   return (double)(team.wins)/(team.wins+team.losses);
}
void PrintStanding(Team team){
   printf("Win percentage: %0.2lf\n",GetWinPercentage(team));
   if(GetWinPercentage(team)>=0.50){
      printf("Congratulations, Team %s has a winning average!",team.name);
   }
   else{
      printf("Team %s has a losing average.\n",team.name);
   }
}
// main.c-----------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

#include "Team.h"

int main(void) {
	Team team = InitTeam();

	char name[20];
	int wins;
	int losses;

	fgets(name, 20, stdin);
	scanf("%d", &wins);
	scanf("%d", &losses);

	// Remove newline character after name
	strtok(name, "\n");

	team = SetName(name, team);
	team = SetWins(wins, team);
	team = SetLosses(losses, team);

	GetName(name, team);
	PrintStanding(team);

	return 0;
}