#include<stdio.h>
int binarysearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i ;
        }
    }
    return -1 ;
}
int main(){
    int arr[]={23,25,2,45,26,89,50} ;
    int n=sizeof(arr)/sizeof(int) ;
    int key = 25 ;
    int searchindex=binarysearch(arr,n,key) ;
    printf("%d is on the index number %d ",key,searchindex) ;
    return 0 ;
}