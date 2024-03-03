#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]) ;
    }
}
void selectionsort(int arr[],int n){
    int min,i,j ;
    for(i=0;i<n-1;i++){
        min = i ;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j ;
            }
        }
        int temp=arr[min] ;
        arr[min] = arr[i] ;
        arr[i]=temp ;
    }
}
int main(){
    int arr[]={50,40,30,20,10} ;
    int n=5;
    printf("Before sorting: ") ;
    printarray(arr,n) ;
    selectionsort(arr,n) ;
    printf("\n") ;
    printf("After sorting: ") ;
    printarray(arr,n) ;
    return 0 ;
}