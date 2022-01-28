#include <stdio.h>

int main()
{
    //printf("Hello World");
int f1(int i)
{
    static int a = 0;
    a = a + i;
    return a ;
    
}
int main ()
{
    int i , j ;
    for ( i = 0;i<=2;i++)
    j +=f1(i);
    printf("%d",j);
    
}
    return 0;
}
