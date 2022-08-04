/*
Title : fixed 2d array(Taking input from user).
Author : Murali Krishna
Date : 0coloums-08-2022
*/
#include<stdio.h>
int main(){
	int rows,coloums;
	printf("How many rows: ");
	scanf("%d",&rows);
	printf("How many coloums: ");
	scanf("%d",&coloums);
	int i,j,arr[rows][coloums];
	printf("Enter elements: ");
	for(i=0;i<rows;i++){
		for(j=0;j<coloums;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The %dx%d matrix is \n",rows,coloums);
	for(i=0;i<rows;i++){
		for(j=0;j<coloums;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
