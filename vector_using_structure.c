#include<stdio.h>
struct vector{
    int x ;
    int y ;
};
void sum_of_vector(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x ;
    sum.y=v1.y+v2.y ;
    
    printf("Sum of x axis is %d \n",sum.x) ;
    printf("Sum of y axis is %d \n",sum.y) ;
}
int main(){
    struct vector v1={5,6} ;
    struct vector v2={5,6} ;
    struct vector sum={0} ;
    sum_of_vector(v1,v2,sum) ;
    return 0 ;
}