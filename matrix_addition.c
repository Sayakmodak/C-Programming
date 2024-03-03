#include<stdio.h>
int main(){
    int a[2][3],b[2][3],c[2][3] ;
    int i,j ;
    // Enter the first matrix:
    printf("Enter first matrix:\n") ;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           scanf("%d", &a[i][j]) ;
        }
    }
    // Printing the first matrix:
    printf("The first matrix is:\n") ;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ", a[i][j]) ;
        }
        printf("\n") ;
    }

    // Entering secod matrix:
    printf("Enter second matrix:\n") ;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           scanf("%d", &b[i][j]) ;
        }
    }
    // Printing second matrix:
    printf("The second matrix:\n") ;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           printf("%d ", b[i][j]) ;
        }
        printf("\n") ;
    }

    printf("Addition is:\n") ;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           c[i][j]=a[i][j]+b[i][j] ;
           printf("%d ",c[i][j]) ;
        }
        printf("\n") ;
    }
   
   
    return 0 ;
}