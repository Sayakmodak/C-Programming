#include<stdio.h>
#include<ctype.h>
int main(){
    char str[50] ;
    int v=0,d=0,p=0,c=0 ;
    int i ;
    printf("Enter string\n") ;
    gets(str) ;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='i'||str[i]=='I'||str[i]=='e'||str[i]=='E'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            v=v+1 ;
        }
        else if(isdigit(str[i])){
            d=d+1 ;
        }
        else if(ispunct(str[i])){
            p=p+1 ;
        }
        else{
            c=c+1 ;
        }
    }
    printf("Viowel is %d ",v) ;
    printf("Digit is %d ",d) ;
    printf("Punctution is %d ",p) ;
    printf("Consonent is %d ",c) ;
    
    return 0 ;
}
