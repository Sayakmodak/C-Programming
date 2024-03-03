#include<stdio.h>
int main(){
    int arr[20],num ;
    int i,j,k,temp ;
    printf("Enter the size of array :") ;
    scanf("%d", &num) ;
    for(i=0;i<num;i++){
        printf("Enter array elements :") ;
        scanf("%d", &arr[i]) ;
    }
    printf("Array is before sorting: ") ;
    for(i=0;i<num;i++){
        printf("%d ", arr[i]) ;
    }
    printf("\n") ;
    for(j=0;j<num-1;j++){       // For number of passes
        for(k=0;k<num-1;k++){       // For comparison in each pass
            if(arr[k]>arr[k+1]){
                temp=arr[k] ;
                arr[k]=arr[k+1] ;
                arr[k+1]=temp ;
            }
        }
    }
    printf("Array is after sorting: ") ;
    for(i=0;i<num;i++){
        printf("%d ", arr[i]) ;
    }

    return 0 ;
}