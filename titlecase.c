#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50] ;
    printf("Enter string : \n") ;
    gets(str) ;
    strlwr(str) ;
    puts(str) ;
    str[0]=toupper(str[0]) ;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1]!=' '){
            str[i+1]=toupper(str[i+1]) ;
        }
    }
    puts(str) ;
    return 0 ;
}