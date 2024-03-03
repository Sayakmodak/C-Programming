#include<stdio.h>
#define N 50
int main(){
    int arr[N][N],i,j,row,col ;
    printf("Enter row:\n") ;
    scanf("%d", &row) ;
    printf("Enter column:\n") ;
    scanf("%d", &col) ;
    printf("Enter matrix:\n") ;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &arr[i][j]) ;
        }
    }
    printf("Your matrix is:\n") ;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ", arr[i][j]) ;
        }
        printf("\n") ;
    }

    printf("Your transposse matrix is:\n") ;
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%d ", arr[j][i]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}