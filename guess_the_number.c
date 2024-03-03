#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess ;
    int number ;
    int nguess=1 ;

    srand(time(0)) ;
    number=rand()%100+1 ;
    

    do{
        printf("Enter your guess:\n") ;
        scanf("%d", &guess) ;

        if(guess>number){
             printf("Higher number !\n") ;
        }
        else if(guess<number){
             printf("Lower number !\n") ;
        }
        else{
            printf("Wow!You guessed it %d attempts", nguess) ;
        }
        nguess++ ;
    }while(guess!=number) ;
    return 0 ;
}