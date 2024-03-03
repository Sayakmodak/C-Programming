#include<stdio.h>
#include<string.h>
int main(){
    char name[50] ;
    printf("Enter your name\n") ;
    fgets(name,50,stdin) ;
    puts(name) ;
    int length=strlen(name) ;
    printf("The length of your full name is %d",length) ;
    return 0 ;
}