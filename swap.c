#include <stdio.h>
int main()
{
     int a,b;
    printf("enter the value of a: \n");
    scanf("%d",&a);
printf(“enter the value of b:”);
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("after swapping a = %d,b =%d",a,b);
    return 0;
}
