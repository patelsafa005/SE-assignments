#include<stdio.h>
int main(){
    int a=100;
    int age;
    int num;
    printf("\n size of int=%d",sizeof(int));
    printf("\n Enter your age:");
    scanf("%d",&age);
    //(condition)?(true)(false)
    (age>=18)?printf("\n Eligible"):printf("\n not eligible");
    printf("\n Enter any number");
    scanf("%d",&num);
    (num>0)?printf("\n positive"):printf("\n negative");
}