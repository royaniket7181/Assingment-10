#include<stdio.h>
int fact(int n){
	int i;
	int f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int combination( int a ,int b){
	int f1=fact(a);
	int f2=fact(b);
	int f3=fact(a-b);
	return f1/(f2*f3);
}
int main (){
	int n,r,c;
	printf("enter total number of combination n and selection");
	scanf("%d %d",&n,&r);
	c=combination(n,r);
	printf("total number of combination is %d",c);
	
}