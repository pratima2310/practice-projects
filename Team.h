#ifndef TEAM_H_
#define TEAM_H_

// TODO: Declare Team struct with data members - name, wins, losses
typedef struct {
    char name[20]; 
    int wins;
    int losses;
} Team;
// TODO: Define the following functions in Team.c

Team InitTeam();
Team SetName(char *userName, Team team);
Team SetWins(int userWins, Team team);
Team SetLosses(int userLosses, Team team);
void GetName(char *userName, Team team);
int GetWins(Team team);
int GetLosses(Team team);
double GetWinPercentage(Team team);
void PrintStanding(Team team);

#endif
