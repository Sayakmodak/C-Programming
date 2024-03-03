#include<stdio.h>
struct vector{
    int x;
    int y;

};
void calsum(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;

    printf("Sum of x is %d\n",sum.x);
    printf("Sum of y is %d\n",sum.y);
}
int main(){
    struct vector v1={5,5};
    struct vector v2={7,8};
    struct vector sum={0};
    calsum(v1,v2,sum);
    return 0;
}