#include<stdio.h>
#include<string.h>
int main(){
    char str1[50], str2[50] ;
    printf("Enter string:\n") ;
    gets(str1) ;
    printf("Your string is %s ",str1) ;
    printf("\n") ;
    strcpy(str2,str1) ;
    strrev(str2) ;
    if(strcmp(str1,str2)==0){
        printf("%s is a Palindrome String",str1) ;
    }
    else{
        printf("%s is not a Palindrome String",str1) ;
    }

    return 0 ;
}