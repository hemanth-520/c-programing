//Use terminal (or) command Prompt to run this code.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[]){
	int i,result=1;
	for(i=1;i<argc;i++){
		printf("argv[%d] = %s\n",i,argv[i]);
	}
	for(i=1;i<argc;i++){
		int x=strtol(argv[i],NULL,10);
		result =result* x;
	}
	printf("multiplication = %d\n",result);
	return 0;
}
