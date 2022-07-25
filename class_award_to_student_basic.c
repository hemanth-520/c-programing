/*
Title   :  Class award of the student.
Author  :  Murali Krishna.
Date    : 25-07-2022.
NOTE    : VERSION 1.
*/
#include<stdio.h>
int main(){
  int marks;
  printf("Enter marks persentage: ");
  scanf("%d",&marks);
  if(marks>=70)
    printf("Distinction.");
  else if(marks>=60)
    printf("First class.");
  else if(marks>=40)
    printf("Second class.");
  else
    printf("Fail.");
}
