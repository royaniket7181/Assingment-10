#include<stdio.h>
void oddnumber(int n){
   int i;
  printf("enter the number");
     scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==1)
		printf("%d ",i);
	}	
}
int main(){
	int n;
  oddnumber(n);
}