#include<stdio.h>
#include<string.h>
int main(){
    char str[50] ;
    printf("Enter string :\n") ;
    gets(str) ;
    printf("String is %s ",str) ;

    printf("After reverse string is %s ",strrev(str)) ;
    return 0 ;
}