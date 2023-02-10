#include<stdio.h>
int main()
{
    int modulus;
    int a, y;
    float add, sub, multi, div;
    scanf ("%f%f", &a,&y);

    add= (a+y);
    sub= (a-y);
    multi= (a*y);
    div= (a/y);
    modulus= (a%y);

    printf ("%f%f%f %f", add,sub,multi,div,modulus);
    return 0;
}
