#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int)) ;
    printf("enter number(5):\n") ;
    for(int i=0;i<5;i++){
        scanf("%d\n",&ptr[i]) ;
    }

    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]) ;
    }

    ptr=realloc(ptr,8) ;
    printf("enter number(8):\n") ;
    for(int i=0;i<8;i++){
        scanf("%d\n",&ptr[i]) ;
    }

    
    for(int i=0;i<8;i++){
        printf("numbeer %d %d\n",i,ptr[i]) ;
    }        

    return 0 ;
}