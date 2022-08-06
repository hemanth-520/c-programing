/*
Title : Basic matrix mulriplication.
Author : Murali Krishna
Date: 06-08-2022
*/
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter size of the matrix: ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter elements for matrix A: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements for matrix B: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Mulplication of matrix A and B is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]+=a[i][j]*b[i][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}