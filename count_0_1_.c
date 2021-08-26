#include <stdio.h>
int count(int);
int main()
{
    int x,c;
    printf("Enter the no.\n");
    scanf("%d",&x);
    c=count(x);
    printf("In x=%d,zeros=%d,ones=%d\n",x,32-c,c);

    return 0;
}
int count(int a){
    if(a)
    return (a&1)+count(a>>1);
    
    
}
