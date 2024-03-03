#include<stdio.h>
int main(){
    char str[50] ;
    int c=0 ;
    printf("Enter string :\n") ;
    gets(str) ;
    printf("String is %s ",str) ;
    for(int i=0;str[i]!='\0';i++){
        c++ ;
    }
    printf("String length is %d ",c) ;
    return 0 ;
}