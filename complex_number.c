#include<stdio.h>
struct complex{
    int real ;
    int img;
};
int main(){
    struct complex no1={6,7};
    struct complex no2={4,6};

    struct complex *ptr ;
    ptr=&no1;

    struct complex *ptr1 ;
    ptr1=&no2;
    printf("Real number of no.1 is %d\n",(*ptr).real ) ;
    printf("Imaginary number of no.1 is %d\n",ptr->img ) ;
    printf("Real number of no.2 is %d\n",no2.real ) ;
    printf("imaginary number of no.2 is %d\n",no2.img ) ;
    printf("Real number of no.2 is %d\n",ptr1->real ) ;
    printf("imaginary number of no.2 is %d\n",(*ptr1).img ) ;
    return 0;
}