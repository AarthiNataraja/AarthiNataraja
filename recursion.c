#include <stdio.h>
void fun(int n)
{
    if(n > 0)
    {
        printf("%d ", n);
        fun(n-1);
    }
}
int main(int argc, const char * argv[]) {
    int x=3;
    fun(x);
    return 0;
}
