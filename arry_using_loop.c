#include<stdio.h>
int main(){
    int price[5];
    for(int i=0;i<5;i++){
        printf("Enter the price of %d\n",i+1);
        scanf("%d\n",&price[i]) ;
    }

        for(int i=0;i<5;i++){
        printf("The price of %d is %d\n",i+1,price[i]);
    }
    return 0;
}