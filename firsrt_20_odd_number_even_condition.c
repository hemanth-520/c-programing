/*
Title : First 20 odd numbers(Even condition).
Author: Murali Krishna.
Date:26/07/2022.
*/
#include<stdio.h>
int main(){
  int i,n=2;
  for(i=1;i<=20;i++){
    if(i%2==0){
      continue;
    }
    printf("%d\n",i);
  }
}
