#include<stdio.h>
int main(){
    char str[50],str2[50] ;
    int i=0,j=0 ;
    printf("Enter string :\n") ;    // Entering the string 
    gets(str) ;
    printf("String is %s ", str) ;
    while(str[i]!='\0'){            // Traversing the string 
        i++ ;
    }
    for(i=i-1;str[i]>=0;i--){       // Coping the str[i] into an another string str2[j]
        str2[j]=str[i] ;
        j++ ;
    }
    str2[j]='\0' ;
    printf("Reverse string is %s ",str2) ;  // Printing the str2[j] ;
    return 0 ;
}