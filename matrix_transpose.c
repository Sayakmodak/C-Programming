#include<stdio.h>
int main(){
    int arr[2][2],trans[2][2] ;
    int i,j ;
    printf("Enter your array:\n") ;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]) ;
        }
    }
    printf("Your array is:\n") ;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[i][j]) ;
        }
        printf("\n") ;
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           trans[j][i]=arr[i][j] ;
        }
    }
    printf("Your transpose array is:\n") ;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",trans[i][j]) ;
        }
        printf("\n") ;
    }
    return 0 ;
}