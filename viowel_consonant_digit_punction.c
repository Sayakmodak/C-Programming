#include<stdio.h>
#include<ctype.h>
int main(){
    char str[50] ;
    int v=0,p=0,c=0,d=0 ;
    printf("Enter string :\n") ;
    gets(str) ;
    printf("String is %s ", str) ;
    for(int i=0;str[i]!='\0';i++){
    if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
        v++ ;
    }
    else if(isdigit(str[i])){
        d++ ;
    }
    else if(ispunct(str[i])){
        p++ ;
    }
    else if(isalpha(str[i])){
        c++ ;
    }
    }
    printf("Viowel is %d \n",v) ;
    printf("Digit is %d \n",d) ;
    printf("Consonant is %d \n",c) ;
    printf("Punctuation is %d \n",p) ;
    return 0 ;
}