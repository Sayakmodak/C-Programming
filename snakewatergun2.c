#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int swn(char you, char comp){
    if(comp==you){
        return 0 ;
    }

    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1 ;
    }

    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1 ;
    }

    if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1 ;
    }

}
int main(){
    printf("Enter 's' for snake, 'g' fot gun, 'w' for water\n") ;
    char you, comp ;
    int number=1 ;
    srand(time(0)) ;
    number=rand()%100 + 1 ;
    printf("Enter your choise:\n") ;
    scanf("%c", &you) ;
    if(number<33){
        comp='w' ;
    }
    else if(number>33 && number<66){
        comp='s' ;
    }
    else{
       comp='g' ;
    }

    int result=swn(you, comp);
    printf("You choose %c and computer choose %c", you, comp) ;
    if(result==0){
        printf("\t---->Game draw!") ;
    }
    else if(result==1){
         printf("\t---->You win!") ;
    }
    else{
         printf("\t---->You lose!") ;
    }


    return 0 ;
}