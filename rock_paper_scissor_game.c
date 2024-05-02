#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(char you,char com){
    //Condition for Draw
    if(you==com){
        return 0;
    }

    //Non-Draw Condition
    if(you=='s' && com=='p'){
        return 1;
    }
    else if(you=='p' && com=='s'){
        return -1;
    }

    if(you=='p' && com=='r'){
        return 1;
    }
    else if(you=='r' && com=='p'){
        return -1;
    }

    if(you=='r' && com=='s'){
        return 1;
    }
    else if(you=='s' && com=='r'){
        return -1;
    }

}

int main(){
    char you,com;
    srand(time(0));// initialize the value for random number generation with current time
    int number = rand()%100+1;
    if(number<33){
        com='r';
    }
    else if(number>33 && number<66){
        com='p';
    }
    else{
        com='s';
    }
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissor : ");
    scanf("%c",&you);
    int result = rockpaperscissor(you,com);
    printf("You choose %c and computer choose %c \n",you,com);
    if(result==0){
        printf("Game Draw");
    }
    else if(result==1){
        printf("You Won");
    }
    else {
        printf("You Lose");
    }
    return 0;
}