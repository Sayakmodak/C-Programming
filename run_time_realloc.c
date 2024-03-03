#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter numbers:\n") ;
    scanf("%d\n", &n) ;
    ptr=(int*)calloc(n,sizeof(ptr)) ;
    for(int i=1;i<n;i++){
        scanf("%d\n", &ptr[i]) ;
    }

    for(int i=1;i<n;i++){
        printf("Number %d is %d\n",i,ptr[i]) ;
    }



    return 0;
}