#include<stdio.h>
#include<ctype.h>
int main(){
    char str[50],i ;
    printf("Enter string :\n") ;
    gets(str) ;
    printf("String is %s ", str) ;
    for(i=0;str[i]!='\0';i++){
        str[i]=tolower(str[i]) ;
    }
    str[0]=toupper(str[0]) ;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1]!=' '){
            str[i+1]=toupper(str[i+1]) ;
        }
    }
    printf("String in title case is %s ",str) ;
    return 0 ;
}
    
