#include<stdio.h>
#include<ctype.h>
int main(){
    char str1[50],str2[50] ;
    int i,j ;
    for(i=0;str[i]<128;i++){
        if(ispunct(str[i])){
            //
          //  printf("%c, ",i) ;
            str2[j]=str1[i] ;
            j++ ;
        }
    }
    str[j]='\0' ;
    printf("%s", str[j]) ;
    return 0 ;
}