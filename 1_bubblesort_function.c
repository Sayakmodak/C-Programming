#include<stdio.h>
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]) ;
    }
}
void bubblesort(int arr[], int n){
    int i ,j ;
    int issorted=0 ;
    for(i=0;i<n-1;i++){
        printf("Working on pass number %d ",i+1) ;
        printf("\n") ;
        issorted=1 ;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j] ;
                arr[j]=arr[j+1] ;
                arr[j+1]=temp ;
                issorted=0 ;
            }
        }
        if(issorted){
            return ;
        }
    }
}
int main(){
    int arr[]={50,40,30,20,10} ;
    int n=5 ;
    printf("Before sorting:") ;
    printarray(arr,n) ;
    printf("\n") ;
    bubblesort(arr,n) ;
    printf("\n") ;
    printf("After sorting:") ;
    printarray(arr,n) ;
    return 0 ;
}