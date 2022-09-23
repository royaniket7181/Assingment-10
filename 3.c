#include <stdio.h>
int iseven(int num){
	if(num%2==0)
	return 1;
	else 
    return 0;
}
int main(){
	int a,num;
	printf("enter the number");
	scanf("%d",&num);
	a=iseven(num);
	if(a==1)
	printf("1");
	else 
	printf("0");

}
