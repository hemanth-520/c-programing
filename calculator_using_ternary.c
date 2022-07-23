/*
Title    :  simple calculator using Ternary operator.
Author   :  Murali Krishna.
Date    : 23-07-2022.
NOTE    : VERSION 1.
*/
#include<stdio.h>
void main(){
  int num1,num2,x=1,ans;
  char operator;
  printf("\n\ta+b, a-b, a*b, a/b, a%%b.\n");
  printf("\tEnter single expresion.\n");
  printf("\nEnter expresion: ");
  scanf("%d %c %d",&num1,&operator,&num2);
  operator=='+'?ans=num1+num2:
  operator=='-'?ans=num1-num2:
  operator=='*'?ans=num1*num2:
  operator=='/'?ans=num1/num2:
  operator=='%'?ans=num1%num2:
  printf("Wrong selection.Answer will be wrong.\a\n");
  printf("%d %c %d = %d\n",num1,operator,num2,ans);
}
