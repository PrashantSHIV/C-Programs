#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    //printf("The number is %d\n",number);
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess > number){
            printf("Lower the Number please\n");
        }
        else if (guess < number){
            printf("Higher the Number please\n");
        }
        else 
        {
            printf("You guessed it in %d attempt",nguess);
        }
        nguess++;
    }while(guess!=number);
    
    return 0;
}