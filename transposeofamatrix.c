#include<stdio.h>
#define N 50
int main(){
    int mat[N][N],r,c ;
    int i,j ;
    printf("Enter your rows and columns for your matrix:\n") ;
    scanf("%d %d", &r,&c) ;
    printf("Enter your matrix:\n") ;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d", &mat[i][j]) ;
        }
    }
    printf("Your matrix is:\n") ;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d ", mat[i][j]) ;
        }
        printf("\n") ;
    }
    printf("Your tranpose matrix is:\n") ;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
        printf("%d ", mat[j][i]) ;
        }
        printf("\n") ;
    }
    
    return 0 ;
}