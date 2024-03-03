#include<stdio.h>
int main(){
    char str1[50],str2[50] ;
    int j=0 ;
    printf("Enter string :\n") ;
    gets(str1) ;
    printf("Your string is %s ",str1) ;
    for(int i=0;str1[i]!='\0';i++){
        str2[j]=str1[i] ;
        j++ ;
    }
    str2[j]='\0' ;
    printf("After copy your string is %s ",str2) ;
    return 0 ;
}