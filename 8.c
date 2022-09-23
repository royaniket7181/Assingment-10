#include<stdio.h>
int fact(int n){
	int i;
	int f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int arrang( int a ,int b){
	int f1=fact(a);
	int f3=fact(a-b);
	return f1/f3;
}
int main (){
	int n,r,a;
	printf("enter total number of arrangement n and selection");
	scanf("%d %d",&n,&r);
	a=arrang(n,r);
	printf("total number of combination is %d",a);
	
}