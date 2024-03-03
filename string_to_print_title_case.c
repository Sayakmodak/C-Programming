#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[60] ;
    int i=1 ;
    printf("Enter string: ") ;
    gets(str) ;
    strlwr(str) ;
    str[0]=toupper(str[0]) ; 
    while(str[i]!='\0'){
        if(str[i]==' ' && str[i+1]!=' ')
            str[i+1]=toupper(str[i+1]) ;
        
        
        i++ ;
    }
    printf("Stirg in titel case: %s ",str) ;
    return 0 ;
}