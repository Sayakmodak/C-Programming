#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50],abr[20] ;
    int j=0,l,i=0 ;
    printf("Enter string ") ;
    gets(str) ;
    l=strlen(str)-1 ;
    while(str[l]!=' '){
        l-- ;
    }
    abr[j]=toupper(str[i]) ;
    abr[j++]='.' ;
    for(i=1;str[i]<l;i++){
        if(str[i]==' ' && str[i+1]!=' '){
            abr[j++]=toupper(str[i+1]) ;
            abr[j++]='.' ;
        }
    }
   // l++ ;
    while(str[l]!='\0'){
        abr[j++]=str[l] ;
        l++ ;
    }
    abr[j]='\0' ;
    printf("Name is %s ",abr) ;
    return 0 ;
}