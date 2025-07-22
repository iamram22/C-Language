// You are developing a scoring system for a simple game. A player's total score is calculated based on their wins, losses, and a bonus for participation.

// Complete the C program to calculate the total_score for a player given their wins and losses. The scoring rules are:

//     ● Each win earns 10 points.
//     ● Each loss deducts 3 points.
//     ● If the total number of games played (wins + losses) is 10 or more, the player receives an additional fixed participation_bonus of 50 points.
 
#include <stdio.h>

int main()
{ 
    int wins;
    int losses;
    
    scanf("%d", &wins);
    scanf("%d", &losses);
    // Complete the solution code here
   int participation_bonus = 50;
   int win = wins * 10;
   int loss = losses * -3;
   int nP = wins + losses;
   int total_score = (win + loss);
   if(nP >= 10) {
      total_score = total_score + participation_bonus;
   }
   
   printf("%d", total_score);
    


    // Suffix fixed Code
    return 0;
}