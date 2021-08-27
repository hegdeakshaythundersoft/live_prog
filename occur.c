#include<stdio.h>
char *rem_alpha(char*,char*,char*);
int main(){

	char str[100];
	printf("Enter the string\n");
	scanf("%s",str);
	char num[sizeof(str)/sizeof(char)];
	printf("%s\n",rem_alpha(str,str+(sizeof(str)/sizeof(str[0])),num));
	return 0;
}
char *rem_alpha(char *p,char*q,char*s){

	
	if(q-p){
	if((*p>='0')&&(*p<='9')){
	*s=*p;
	s++;
	}
	rem_alpha(p+1,q,s);
	}
	
	return s-1;

}
