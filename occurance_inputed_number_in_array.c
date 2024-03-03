#include<stdio.h>
int occurance(int arr[6],int num){
    int c=0 ;
    for(int i=0;i<6;i++){
        if(arr[i]==num){
            c++ ;
        }
    }
    return c ;
}
int main(){
    int arr[6] ;
    int num ;
    int i ;
    printf("Enter numbers in array upto 6 elements:\n") ;
    for(i=0;i<6;i++){
        scanf("%d", &arr[i]) ;
    }
    printf("Enter number:\n") ;
    scanf("%d", &num) ;

    printf("Occurance of %d is %d",num,occurance(arr,num)) ;
    return 0 ;
}