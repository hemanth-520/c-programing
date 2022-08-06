/*
Title : Multiplication of two Matrices.
Author : Murali Krishna
Date: 06-08-2022
*/
#include<stdio.h>
#define max 10
int main(){
    int rows1,col1,rows2,col2,i,j,k;
    int a[max][max],b[max][max], c[max][max];
    printf("Size of matrix A:\n");
    printf("How many rows? ");
    scanf("%d",&rows1);
    printf("How many coloums? ");
    scanf("%d",&col1);
    printf("Enter elements of marix A.\n");
    for(i=0;i<rows1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nSize of matrix B:\n");
    printf("How many rows? ");
    scanf("%d",&rows2);
    printf("How many coloums? ");
    scanf("%d",&col2);
    printf("Enter elements of marix B.\n");
    for(i=0;i<rows2;i++){
        for(j=0;j<col2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMultiplication of marix A and B is:\n");
    for(i=0;i<rows1;i++){
        for(j=0;j<col2;j++){
            c[i][j]=0;
            for(k=0;k<rows2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
