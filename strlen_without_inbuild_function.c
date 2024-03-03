#include<stdio.h>
int main(){
    char str[50] ;
    int i=0 ;
    printf("Enter string:\n") ;
    gets(str) ;
    while(str[i]!='\0'){
        i=i+1 ;
    }
    printf("String length is %d ",i) ;
    return 0 ;
}