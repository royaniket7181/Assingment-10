#include<stdio.h>
int fact(int n){
   int i;
   int f=1;
   for(i=1;i<=n;i++){
	f=f*i;
	}
	return f;	
}
int main(){
	int n,f;
	printf("enter the number for factorial");
     scanf("%d",&n);
   f=fact(n);
   printf("factorial is %d",f);
}