#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j ;
    char name[50][50] ;
    char temp[50] ;
    printf("Enter the number of names :\n") ;
    scanf("%d",&n) ;
    printf("Enter names :\n") ;
    for(i=0;i<n;i++){
    fflush(stdin) ;
    //scanf("%s",name[i]) ;
    gets(name[i]) ;
    }
    printf("Names are :\n") ;
    for(i=0;i<n;i++){
        puts(name[i]) ;
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(name[i],name[i+1])>0){
                strcpy(temp,name[i]) ;
                strcpy(name[i],name[j]) ;
                strcpy(name[j],temp) ;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s \n",name[i]) ;
    }
    return 0 ;
}