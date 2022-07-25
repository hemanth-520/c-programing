/*
Title : Tables (in range)
Author: Murali Krishna.
Date: 25/05/2022.
*/
#include<stdio.h>
void main(){
  int num,range,rows;
  printf("Enter number :");
  scanf("%d",&num);
  while(range<=0){
    printf("Enter range: ");
    scanf("%d",&range );
  }
  for(rows=1;rows<=range;rows++){
    printf("%d * %d = %d\n",num,rows,num*rows);
  }
}
