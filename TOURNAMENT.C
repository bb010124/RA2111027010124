// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int team1,team2,team3;
 //input for the declared variables will be the no_of_matches_won by the respective teams
 scanf("%d %d %d",&team1,&team2,&team3);
 if(team1>team2&team3){
     printf("team1 is the winner");
 }
 else {
     printf("team1 lost the tournament");
 }
    
    return 0;
}
