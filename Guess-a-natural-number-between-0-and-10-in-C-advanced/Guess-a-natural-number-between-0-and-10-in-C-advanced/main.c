//
//  main.c
//  Guess-a-natural-number-between-0-and-10-in-C-advanced
//
//  Created by Gabriela Valentina on 02.12.2022.
//
//Write a program that asks the user to guess a natural number between 0 and 10, in a maximum of 5 attempts. The program takes a certain number from the user, which it will use to start the random number generator.

#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
   srand( (unsigned int) time(NULL) );
    int r = rand() % 11;
    int x = 1;
    int k = 0;

    printf("Enter a number between 0 and 10\n");

    int nr;
    while(x<=5){
    scanf("%d",&nr);
    if (r==nr){
         printf("Congratulations, you guessed the number!\n");
         k=1;
         break;
    }else{
        printf("What a shame! You didn't guess the number, please enter another one!\n");
    }
        x++;
    }
    if(k==0){
        printf("Bad luck! You didn't guess the number\n");
    }
}
