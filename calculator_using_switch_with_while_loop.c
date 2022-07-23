/*
Title    :  simple calculator using switch.
Author   :  Murali Krishna.
Date    : 22-07-2022.
NOTE    : VERSION 3.
*/
#include<stdio.h>
void main(){
  int num1,num2,x=1;
  char operator;
    printf("\n\ta+b, a-b, a*b, a/b, a%b.\n");
    printf("\tEnter single expresion.\n");
    while(x<2){
    printf("\nEnter expresion: ");
    scanf("%d %c %d",&num1,&operator,&num2);
    switch(operator){
      case '+':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
      case '-':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
      case '*':
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
      case '/':
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;
      case '%':
        printf("%d %% %d = %d",num1,num2,num1%num2);
        break;
      default:
        printf("wrong operator selected");
    }
  }
}
