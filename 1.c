#include<stdio.h>
float area( float r){
	float area;
	area=3.14*r*r;
	return area;
}
int main(){
	float a,r;
	printf("enter radius");
	scanf("%f",&r);
	a=area(r);
	printf("%f is the area of circle",a);
}