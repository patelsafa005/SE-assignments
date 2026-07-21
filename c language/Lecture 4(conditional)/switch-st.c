#include<stdio.h>
//switch
/*
switch(choice)
{
case 1://block;
case 2://block;
case 3://block;
}
*/
int main(){
    int r,l,b,h,base,ch;
    float pi=3.14;
    printf("\n press 1 for find area of circle");
    printf("\n press 2 for find area of rectangle");
    printf("\n press 3 for find area of triangle");
    printf("\n Enter your choice");
    scanf("%d",&ch);
    switch(ch){
case 1:  
        printf("\n Enter radius");
        scanf("\%d",&r);
        printf("\n Area of circle=%f",(r*r*pi));
  break;
 case 2:
         printf("\n Enter length & breadth");
         scanf("%d %d",&l,&b);
         printf("\n area of rectangle=%d",(l*b));
break;
case 3:
       printf("\n Enter height and base");
       scanf("%d %d",&h,&b);
       printf("\n area of triangle=%f",(h*base*0.5));
break;
default:
      printf("\n Wrong choice");
break;
    }
    return 0;
}