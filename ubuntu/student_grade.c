#include<stdio.h>
int main(){
	char grade;
	int marks;
	printf("Enter your marks. ");
	scanf("%d",&marks);
	if(marks>=90)
		grade ='A';
	else if (marks>=70)
		grade = 'B';
	else if (marks>=50)
		grade= 'C';
	else
		grade = 'F';
	printf("Student grade = %c.\n",grade);
}
