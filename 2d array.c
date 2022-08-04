/*
Title : fixed 2d array(Taking input from user).
Author : Murali Krishna
Date : 04-08-2022
*/
#include<stdio.h>
int main(){
	int i,j,arr[3][4];
	printf("Enter elements: ");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
