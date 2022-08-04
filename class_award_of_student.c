444/*
Title   :  Class award of the student.
Author  :  Murali Krishna.
Date    : 25-07-2022.
NOTE    : VERSION 1.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  int marks;
  char class[20];
  printf("Enter your marks persentage: ");
  scanf("%d",&marks);
  if(marks>=70)
    strcpy(class,"Distincion.");
  else if(marks>=60)
    strcpy(class,"First class.");
  else if(marks>=40)
    strcpy(class,"Second class.");
  else
    strcpy(class,"Fail.");
  printf("\n\tThe result is: %s\n",class);
}
