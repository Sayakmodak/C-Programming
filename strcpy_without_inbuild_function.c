#include<stdio.h>
int main(){
    char str1[50],str2[50] ;
    int i=0 ;
    printf("Enter string:\n") ;
    gets(str1) ;
    while(str1[i]!='\0'){
        str2[i]=str1[i] ;
        i=i+1 ;
    }
    str2[i]='\0' ;
    printf("Your string is %s \n",str1) ;
    printf("After copy your string is %s ",str2) ;
    return 0 ;
}