#include<stdio.h>
int initializer(void)
{
    return 50;
}
  
int main()
{
    static int i = 0;
    printf(" value of i = %d", i);
    getchar();
    return 0;
}
