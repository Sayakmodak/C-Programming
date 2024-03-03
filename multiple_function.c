#include<stdio.h>
void morning() ;
void afternoon() ;
void night() ;

int main(){
    morning() ;
    afternoon() ;
    night() ;

    return 0 ;
}

void morning(){
    printf("Hi! Good Morning!\n") ;
}

void afternoon(){
    printf("Hi! Good Afetrnoon!\n") ;
}

void night(){
    printf("Hi! Good Night!\n") ;
}