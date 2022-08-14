/*
Title : Multiplication of two Matrices.
Author : Murali Krishna
Date: 06-08-2022
*/
#include<stdio.h>
#define max 10
int main(){
    int rowsA,colA,rowsB,colB,i,j,k;
    int a[max][max],b[max][max], c[max][max];
    printf("Size of matrix A:\n");
    printf("How many rows? ");
    scanf("%d",&rowsA);
    printf("How many coloums? ");
    scanf("%d",&colA);
    printf("Enter elements of marix A.\n");
    for(i=0;i<rowsA;i++){
        for(j=0;j<colA;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nSize of matrix B:\n");
    printf("How many rows? ");
    scanf("%d",&rowsB);
    printf("How many coloums? ");
    scanf("%d",&colB);
    printf("Enter elements of marix B.\n");
    for(i=0;i<rowsB;i++){
        for(j=0;j<colB;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(colA == rowsB){
      printf("\nMultiplication of marix A and B is:\n");
      for(i=0;i<rowsA;i++){
        for(j=0;j<colB;j++){
            c[i][j]=0;
            for(k=0;k<rowsB;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
      }
    }
    else
      printf("\nDimension error.\n");
}
