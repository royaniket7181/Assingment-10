#include<stdio.h>
int check(int num, int a){
	int r,count=0;
	while(num>0){
	 r=num%10;
     if(r==a){
	 	count=1;
	 	break;
		 }
		 num=num/10;
	}
	return count;
}
int main(){
	int num ,a,t;
	printf("give the number");
	scanf("%d",&num);
	printf("give the digit");
	scanf("%d",&a);
	t=check(num,a);
	if(t==1)
	printf("yes");
	else 
	printf("no");
}