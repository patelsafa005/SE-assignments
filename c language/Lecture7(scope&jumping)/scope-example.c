#include<stdio.h>
float pi=3.14;//global scope
void areaOFcircle(int r){// formal parameter
    float area= r*r*pi;
    printf("\n areaOFcircle=%f",area);
}
int main(){
    {
    int x=100;//local variable
    printf("\n x=%d",x);
    printf("\n in local scope pi=%f",pi);
}
// printf("\n x=%d",x);=>generate error like undefine variable
printf("\n in main scope pi=%f",pi);
areaOFcircle(5);
}