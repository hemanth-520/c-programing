#include<stdio.h>
int main(){
	long long num;
	long long count=0;
	printf("Enter number. ");
	scanf("%lld",&num);
	do{
		num /= 10;
		++count;
		}while(num != 0);
	printf("The number of digits = %lld\n",count);
}
