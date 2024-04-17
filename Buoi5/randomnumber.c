//
// Created by PC on 4/17/2024.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

 int d13_luckynum(){
//int main(){
    int guess,
        randomNumber;

    srand(time(0));
    randomNumber = rand() % 100 + 1;
    do {
        printf("Guess th number (between 1 and 100): ");
        scanf("%d", &guess);

        if(guess > randomNumber){
            printf("Too high\n");
        } else if(guess < randomNumber){
            printf("Too low\n");
        } else{
            printf("Congratulations! You guessed the number.\n");
        }
} while (guess != randomNumber);
    return 0;
}