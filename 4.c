#include<stdio.h>
void natural(int n){
   int i;
  printf("enter the number");
     scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",i);
	}	
}
int main(){
	int n;
  natural(n);
}