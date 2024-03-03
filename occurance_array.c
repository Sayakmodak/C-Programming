#include<stdio.h>
int occurance(int arr[6],int num){
    int count=0 ;
    for(int i=0;i<6;i++){
        if(arr[i]==num){
            count=count+1 ;
        }
       
    }
    return count ;
}
int main(){
    int arr[]={1,2,3,5,5,6} ;
    int num=5 ;
    printf("Occurance is %d", occurance(arr,num)) ;
    return 0 ;
}
  

    