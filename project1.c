#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number;
    int nguess=1 ;
    int guess ;

    srand(time(0)) ;
    number= rand()%100+ 1 ;

    do{
        printf("Enter any number!") ;
        scanf("%d", &guess) ;

        if(guess>number){
            printf("Higher number!\n") ;
        }
        else if(guess<number){
            printf("Loweer number!\n") ;
        }
        else{
            printf("You guessed it %d attempts \n", nguess) ;
        }
        nguess++ ;

    }while(guess!=number) ;

    return 0 ;
}