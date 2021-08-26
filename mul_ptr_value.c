/*wap to return multiple values from a function using ptr*/

#include<stdio.h>
int* mul_ret(int);
int main(){

	int *p,i=7,j=0;
	char op[7]={'+','/','*','%','-',' ','i'};
	p=mul_ret(10);
	while(i--)
	printf("10%c10= %d\n",op[j++],*p++);
	return 0;
}
int* mul_ret(int a){
	int arr[7],*ptr=arr;
	arr[0]=a+10;
	arr[1]=a/10;
	arr[2]=a*10;
	arr[3]=a%10;
	arr[4]=a-10;
	arr[5]=a;
	arr[6]=++a;
	return ptr;





}
