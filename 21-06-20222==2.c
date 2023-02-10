#include<stdio.h>
int main()
{
    int a,c;
    scanf("%d",&a);
    c=(a%4==0)&&(a%100!=0)||(a%400==0)?
    printf("Leap year"):printf("not leap year");
}
