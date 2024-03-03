#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]) ;
    }
    printf("\n") ;
}
void selectionsort(int arr[],int n){
    int i,j ;
    for(i=0;i<n-1;i++){
        int min=i ;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j ;
            }
        }
        int temp=arr[min] ;
        arr[min]=arr[i] ;
        arr[i]=temp ;
    }
}
int main(){
    int arr[]={50,30,10,60,40} ;
    int n=5 ;
    printf("Before sorting :") ;
    printarray(arr,n) ;
    selectionsort(arr,n) ;
    printf("After sorting :") ;
    printarray(arr,n) ;
    return 0 ;
}