#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int)) ;
    printf("Enter numbers(5)\n") ;
    for(int i=1;i<=5;i++){
        scanf("%d",&ptr[i]) ;
    }


    printf("Enter numbers(8)\n") ;
    ptr=realloc(ptr,8) ;
    for(int i=1;i<=8;i++){
        scanf("%d",&ptr[i]) ;
    }
    // print
    for(int i=1;i<=8;i++){
        printf("Number %d is %d\n",i,ptr[i]) ;
    }


    return 0; 
}