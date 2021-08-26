/*
WAP to convert dec-bin using bitwise operators
*/


#include<stdio.h>
void dec_bin(int,char*,char*);
int main(){
	int x;
	char bin_[33];
	printf("enter the no.\n");
	scanf("%d",&x);
	dec_bin(x,bin_,&bin_[31]);
	printf("base 10 %d = %s base 2\n",x,bin_);
	return 0;
}
void dec_bin(int a,char *b,char *c){

	if(c-b>=0){
	*b=((1<<(c-b)&a)>>(c-b))+'0';/*ANDing bitwise ==>shift back to LSB ==> '0' addded to get binary string*/
	dec_bin(a,b+1,c);
	}
	else if(c-b<0){
	*b='\0';/*null char padding*/
	return;
	}
	return;
		
	



}
