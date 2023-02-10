#include<stdio.h>
int main()
{
    int x, y, z, c;
    scanf ("%d%d%d", &x,&y,&z);
    c= (x>y)&&(x>z)?x:(y>z)?y:z;
    printf("\n max value %d",c);

    return 0;
}
