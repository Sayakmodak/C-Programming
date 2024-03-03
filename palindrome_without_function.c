#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50] ;
    int i=0,j=0 ;
    printf("Enter string:\n") ;
    gets(str1) ;
    //strcpy(str2,str1) ;
    // Reversing string 1
    while(str1[i]!='\0'){
        i++ ;
    }
    for(i=i-1;i>=0;i--){
        str2[j]=str1[i] ;
        j++ ;
    }
    str2[j]='\0' ;
    if(strcmp(str1,str2)==0){
        printf("Palindrome string") ;
    }
    else{
        printf("Not Palindrome string") ;
    }
    return 0 ;
}