#include<stdio.h>
struct vector{
    int x ;
    int y ;
};
void cal_vector(struct vector v1,struct vector v2,struct vector sum){
     sum.x=v1.x+v2.x ;
     sum.y=v1.y+v2.y ;
    printf("Sum of x axis is %d ",sum.x) ;
    printf("Sum of y axis is %d ",sum.y) ;
}
int main(){
    struct vector v1={8,5} ;
    struct vector v2={8,5} ;
    struct vector sum={0} ;
    cal_vector(v1,v2,sum) ;
    return 0 ;
}