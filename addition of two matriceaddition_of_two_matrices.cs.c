/*
Title : Addition of two matrices.
Author : Murali Krishna
Date : 04-08-2022
*/
#include<stdio.h>
int main(){
	int rows,coloums;
	printf("How many rows: ");
	scanf("%d",&rows);
	printf("How many coloums: ");
	scanf("%d",&coloums);
	int i,j,a[rows][coloums],b[rows][coloums],c[rows][coloums];
	printf("Enter elements for matrix a: ");
	for(i=0;i<rows;i++){
		for(j=0;j<coloums;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements for matrix b: ");
	for(i=0;i<rows;i++){
		for(j=0;j<coloums;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The %dx%d matrix is \n",rows,coloums);
	for(i=0;i<rows;i++){
		for(j=0;j<coloums;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
