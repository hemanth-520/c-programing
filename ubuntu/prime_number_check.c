#include<stdio.h>
int main(){
	int num,flag=0,x;
	printf("Enter number. ");
	scanf("%d",&num);
	for(x=2;x<num/2;x++){
		if(num%x==0){
			printf("%d is not a prime number.\n",num);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d is a prime number.\n",num);
	}
}
