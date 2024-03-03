#include<stdio.h>
int cviowel(char str[]){
    int count=0;
    for(int i=0;str[i]!='0';i++){
        if(str[i]=="a"||str[i]=="e"||str[i]=="i"||str[i]=="o"||str[i]=="u"){
            count++ ;
        }
    }
    return count ;
}
int maun(){
    char str[]="sayak";
    
    printf("%d",cviowel(str)) ;
    return 0;
}