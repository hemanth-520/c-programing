/* Title   :- Bitwise operators
 	Author  :- Murali Krishna
 	Date    :- 07/07/2022
*/
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers to check bitwise operators. ");
	scanf("%d %d",&a,&b);
	// a&b, a|b, a^b.
	printf("\n%d & %d = %d\n",a,b,a&b);
	printf("%d | %d = %d\n",a,b,a|b);
	printf("%d ^ %d = %d\n",a,b,a^b);
	//Letf shift of a.
	printf("\nLeft shift.(considering %d)\n",a);
	printf("%d << 1 = %d\n",a,a<<1);
	printf("%d << 2 = %d\n",a,a<<2);
	printf("%d << 3 = %d\n",a,a<<3);
	printf("%d << 4 = %d\n",a,a<<4);
	//Right shift of a.
	printf("\nRight shift.(considering %d)\n",a);
	printf("%d >> 1 = %d\n",a,a>>1);
	printf("%d >> 2 = %d\n",a,a>>2);
	printf("%d >> 3 = %d\n",a,a>>3);
	printf("%d >> 4 = %d\n",a,a>>4);
	//Left shift of b.
	printf("\nLeft shift.(considering %d)\n",b);
	printf("%d << 1 = %d\n",b,b<<1);
	printf("%d << 2 = %d\n",b,b<<2);
	printf("%d << 3 = %d\n",b,b<<3);
	printf("%d << 4 = %d\n",b,b<<4);
	//Right shift of b.
	printf("\nRight shift.(considering %d)\n",b);
	printf("%d >> 1 = %d\n",b,b>>1);
	printf("%d >> 2 = %d\n",b,b>>2);
	printf("%d >> 3 = %d\n",b,b>>3);
	printf("%d >> 4 = %d\n",b,b>>4);
	//one's complement of a, b.
	printf("\nOne's complement of %d and %d\n",a,b);
	printf("%d ~ %d\n",a,~a);
	printf("%d ~ %d\n",b,~b);
	//Terminary operater.
	printf("\nComparing %d and %d.",a,b);
	a>b?printf("\n%d is greater than %d.\n",a,b):printf("\n%d is greater than %d.\n",b,a);
	return 0;
}
