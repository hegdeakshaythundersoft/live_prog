/*WAP to get sum of digits of a num using recursion*/

#include<stdio.h>
int sum_dig(int);
int main(){
	int x;
	printf("enter the no.\n");
	scanf("%d",&x);
	printf("digitwise sum of x = %d is %d",x,sum_dig(x));
	return 0;
}
int sum_dig(int dig){

	if(dig)
	return dig%10+sum_dig(dig/10);/*dig%10 is indivisual digit and for every stack frame num/10 is supplied as moving towards MSDigit*/



}
