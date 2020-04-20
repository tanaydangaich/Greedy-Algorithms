#include <stdio.h>
#include <cs50.h>
#include <math.c>

int main(void)
{
    //initialisation
    float coins = 0;    
    int step = 0;                      //to count number of coins 

    //Taking user input
    while(coins<=0)
        coins = get_float("Enter the amount of change: ");
    int change = round(coins*100);           //convert dollars into cents
        do{
        if(change >= 25){
            change-=25;
            step+=1;                  
        }
        else if(change<25 && change>=10){
            change-=10;
            step+=1;
        }
        else if(change<10 && change>=5){
            change-=5;
            step+=1;
        }
        else if(change<5 && change>=1){
            change-=1;
            step+=1;
        }
        else{
            break;
        }
        }
        while(change != 0);       //loop until change is 0
     printf(" Total number of coins required: %i ",step);
}
