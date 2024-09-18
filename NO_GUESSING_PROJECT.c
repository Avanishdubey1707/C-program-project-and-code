//NO GUESSING GAME  
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int randomnumber=(rand() % 100)+1;
    int number_of_guesses=0;

    int guessed;
    do{
        printf("enter the no");
        scanf("%d",&guessed);
        if(guessed>randomnumber){
            printf("Please Enter The Lower Number\n");
        }
        else if (guessed<randomnumber)
        {
            printf("Please Enter The Higher Number\n");
        }
        else{
            printf("congrats");
            
        }
        number_of_guesses++;

        
    } while(guessed != randomnumber);
    printf("You Have Guessed The No In %d guesses",number_of_guesses);
   return  0; 

    
}