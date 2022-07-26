/*
Title : First 20 odd numbers.
Author: Murali Krishna.
Date:26/07/2022.
*/
#include<stdio.h>
int main(){
  int i,n=2;
  for(i=1;i<=20;i++){
    if(i==n){
      n=n+2;
      continue;
    }
    printf("%d\n",i);
  }
}
