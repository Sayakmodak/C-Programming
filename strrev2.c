#include<stdio.h>
int main(){
    char str1[50],str2[50] ;
    int i=0,j=0 ;
    printf("Enter string:\n") ;
    gets(str1) ;
    while(str1[i]!='\0'){
        i=i+1 ;
    }
    for(i=i-1;i>=0;i--){
        str2[j]=str1[i] ;
        j++ ;
    }
    str2[j]='\0' ;
    printf("Reverse string is %s ",str2) ;
    return 0 ;
}