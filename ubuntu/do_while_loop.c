#include<stdio.h>
int main(){
	int num;
	do{
		printf("Enter number:");
		scanf("%d",&num);
		printf("%d\n",num);
		if(num==0){
			break;
		}
	}while(num =! 0);
}
