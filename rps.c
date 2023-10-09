#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define rock 1
#define paper 2
#define scissors 3

int main (){

srand(time(NULL));
int player_throw = 0;
int ai_throw = 0;
bool draw = false;

do
{
   printf("Select your throw.\n");
   printf("1) Rock\n");
   printf("2) Paper\n");
   printf("3) Scissor\n");
   printf("Selection: ");
   scanf("%d" , &player_throw);


ai_throw = (rand() % 3) + 1;

if ( ai_throw == rock)
{
   printf("\nAI throw is rock.\n");
}
else if( ai_throw == paper ){
    printf("\nAI throw is paper.\n");
}
else if( ai_throw == scissors){
    printf("\nAI throw is scissors.\n");
}

if(player_throw == rock && ai_throw == scissors){
    printf("\nrock beats scissors. You win!!\n");
}
else if (player_throw == paper && ai_throw == rock){
    printf("\npaper beats rock. You win!!\n");
}
else if (player_throw == scissors && ai_throw == paper){
    printf("\nscissors beats paper. You win!!");
}
else if (player_throw == paper && ai_throw == scissors){
    printf("\nscissors beats paper. You lose!!");
}
else if (player_throw == rock && ai_throw == paper){
    printf("\npaper beats rock. You lose!!\n");
}
else if(player_throw == scissors && ai_throw == rock){
    printf("\nrock beats scissors. You lose!!\n");
}
else{
    printf("\n DRAW. PLAY AGAIN!!!");
    draw = true;
}

} while (draw);



    return 0;
}