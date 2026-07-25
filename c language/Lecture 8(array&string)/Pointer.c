#include<stdio.h>
int main(){
    int a=10;
    int *ptr;//pointer value address
    ptr= &a;
    printf("\n ptr value=%d address=%p",*ptr,ptr);
    *ptr=200;
    printf("\n a=%d",a);
}