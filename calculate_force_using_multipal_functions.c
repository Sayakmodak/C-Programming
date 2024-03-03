#include<stdio.h>
float force(float mass) ;
int main(){
    float m ;
    printf("Enter the value of mass\n") ;
    scanf("%f", &m) ;

    printf("The value of Force is %f",force(m)) ;
    return 0 ;
}

float force(float mass){
    float result ;
    result=(9.8 * mass);
    return result ;
}