#include<stdio.h>
#include<conio.h>
void main(){
	int fact,x,num;
	printf("Enter a number. ");
	scanf("%d",&num);
	for(x=1;x<=num;++x){
		fact=fact*x;
	}
	printf("%d factorial is %d\n",num,fact);
	getch();
}
