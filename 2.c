#include<stdio.h>
float CalIntrest(int p,int t,int r){
	float intrest;
	intrest=(p*r*t)/100;
	return intrest;
}
int main(){
	float si;
	int p,r,t;
	printf("\nEnter the value of p,r,t");
	scanf("%d %d %d",&p,&r,&t);
	si=CalIntrest(p,r,t);
	printf("%f is the amont of interest",si);
}