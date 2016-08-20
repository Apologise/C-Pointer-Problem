#include<stdlib.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SIZE 1000;

int main(){
	int a = 10;
	int *p = &a;
	printf("%d\n", p);
	printf("%d,%d\n",*p++,p);
	

}
