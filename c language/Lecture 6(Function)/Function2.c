#include<stdio.h>
//without returntype without parameter
void display(){
    printf("\n hello world");
}
//without returntype with parameter
void add(int x, int y){//defination
    int ans= x+y;
    printf("/n addition of %d and %d =%d",x,y,ans);
}
//with returntype without parameter
float areaOFcircle(){
    int r;
    float area;
    printf("\n enter radius");
    scanf("%d",&r);
    area=3.14*r*r;
    return area;
}
//with returntype with parameter
float areaOFcirclesecond(int r){
    float area;
    area=3.14*r*r;
    return area;
}
int main(){
    display();
    add(12,78);
    printf("\n areaOFcircle=%f",areaOFcircle());
    printf("\n areaOFcircle of second=%f",areaOFcirclesecond(3));

}