#include<stdio.h>
#include<ctype.h>
int main(){
    char ch ;
    printf("Enter character :\n") ;
    scanf("%c",&ch) ;
    if(isdigit(ch)){
        printf("Digit") ;
    }
    else{
        printf("Not") ;
    }
    return 0 ;
}