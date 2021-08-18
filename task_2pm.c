/**
Q) WAP to read an input string from the user and return the total number of occurences of a given character (user input) in the string - using pointer.
**/
#include <stdio.h>
void occur(char*,char*);
int main()
{   
   char str[100];
   char count[100]={0};/*count init by 0*/
   int i=0;
    printf("Enter the string\n");
    scanf("%s",str);
    
    
    occur(str,count);
  
    for(i=0;str[i]!='\0';i++){
    if(str[i]==-128)
    continue;
    printf("%c %d\n",str[i],count[i]);
    }
    return 0;
}
void occur(char *p,char *q){
   
    char *s=p;
    int i;
 
    
   for(;*p!='\0';p++){/*outer loop inc index till null char*/
        for(i=0;*(s+i)!='\0';i++){/*inner loop inc till null char without inc ptr*/
            if(*p==*(s+i)){/*if ele repeats count[i]++*/
               *q+=1;
               if((*q>1)&&(p!=(s+i)))/*rep ele from second occur =-128 to smooth print*/
               *(s+i)=-128;
        }
   }
        q++;
    }
    
    return;
}
