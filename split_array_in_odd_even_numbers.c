#include<stdio.h>
int main(){
    int arr[6];
    int i;
    printf("Enter numbers:\n") ;
    for( i=0;i<6;i++){
        scanf("%d", &arr[i]) ;
    }
    printf("Even numbers:\n") ;
    for(i=0;i<6;i++){
        if(arr[i]%2==0){
            printf("%d\t",arr[i]) ;
        }
        //else if(arr[i]%2!=0){
          //  printf("%d",arr[i]) ;
       // }
    }
     printf("Odd numbers:\t") ;
     for(i=0;i<6;i++){
        if(arr[i]%2!=0){
            printf("%d\t",arr[i]) ;
        }
    
}
return 0 ;
}