#include<stdio.h>
struct complex{
    int x ;
    int y ;
};
int main(){
    struct complex num={5,6} ;
    struct complex *ptr=&num ;
    printf("Real number is %d \n",(*ptr).x) ;
    printf("Imaginary number is %d ",ptr->y) ;
    return 0 ;
}