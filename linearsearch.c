#include<stdio.h>
int linsearch(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i ;
        }
    }
    return-1 ;
}
int main(){
    int arr[]={2,5,3,6,3,4,5,8} ;
    int n = sizeof(arr)/sizeof(int) ;
    int element=5 ;
    int searchindex=linsearch(arr,n,element) ;
    printf("%d is in the index number %d ",element,searchindex) ;
    return 0 ;
}