#include<stdio.h>
int main(){
	int num;
	printf("Enter number. ");
	scanf("%d",&num);
	if(num%3==0&&num%5==0)
		printf("%d is divisible by 3 and 5.\n",num);
	else if(num%3==0)
		printf("%d is only divisible by 3.\n",num);
	else if(num%5==0)
		printf("%d is only divisible by 5.\n",num);
	else
		printf("%d is not divisible by 3 and 5.\n",num);
}

