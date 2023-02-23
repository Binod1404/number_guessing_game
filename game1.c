#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,attempts=1;
    srand(time(0));
    number=rand()%100+1;
    do
    {
        printf("Enter your guess:\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("guess lower number!");
            }
        else if(guess<number){
            printf("guess higher number!");
        }
        else{
            printf("you guessed correct in %d attempts",attempts);
        }
        attempts++;
    } while(guess!=number);
    return 0;
}