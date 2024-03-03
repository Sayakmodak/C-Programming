#include<stdio.h>
int linearsearch(int arr[],int n, int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){ 
            printf("%d is on index number %d ",element,i) ;
        }
    }
    return -1 ;
}

int main(){
    int arr[]={30,40,20,10,50,60,70,90} ;
    
    int n= sizeof(arr)/sizeof(int) ;
    int element = 60 ;
    int searchindex=linearsearch(arr,n,element) ;
    
    return 0 ;
}