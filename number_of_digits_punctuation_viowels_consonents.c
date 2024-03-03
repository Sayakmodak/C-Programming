#include<stdio.h>
#include<ctype.h>
int main(){
    char str[50] ;
    int v=0,p=0,d=0,c=0 ;
    printf("Enter string :\n") ;
    gets(str) ;
    puts(str) ;
    printf("\n") ;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            v=v+1 ;
        }
        else if(isdigit(str[i])){
            d=d+1 ;
        }
        else if(ispunct(str[i])){
            p=p+1 ;
        }
        else if(isalpha(str[i])){
            c=c+1 ;
        }
    }
    printf("Viowel is %d ",v) ;
    printf("Consonant is %d ",c) ;
    printf("Digit is %d ",d) ;
    printf("Punctuation is %d ",p) ;
    return 0 ;
}