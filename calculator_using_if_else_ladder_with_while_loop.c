/*
Title   :  Simple calculator using if else ladder.
Author  :  Murali Krishna.
Date    : 23-07-2022.
NOTE    : VERSION 1.
*/
#include<stdio.h>
void main(){
  int num1,num2,x=1,ans;
  char operator;
  printf("\n\ta+b, a-b, a*b, a/b, a%b.\n");
  printf("\tEnter single expresion.\n");
  while(x<2){
  printf("\nEnter expresion: ");
  scanf("%d %c %d",&num1,&operator,&num2);
  if (operator=='+')
    ans = num1+num2;
  else if (operator == '-')
    ans = num1 - num2;
  else if (operator == '*')
    ans = num1 * num2;
  else if (operator == '/')
    ans = num1 / num2;
  else if (operator == '%')
    ans = num1 % num2;
   else
    printf("wrong oprator selected.Answer will be wrong.\n");
  printf("%d %c %d = %d",num1,operator,num2,ans);
  }
}
