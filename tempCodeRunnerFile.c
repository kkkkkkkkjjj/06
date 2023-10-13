#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
    {
        int res =1;
        for ( int i = 1; i<= n; i++){
             res *= i;
        }
        return res;
    }

int combination(int n, int r)
{
    int div1, div2 ;

    div1 = factorial(n);
    div2 = factorial(n - r) * factorial(r);
    
   return (div1 / div2);
}

int main(int argc, char* argv[])
{
    int n, r;
    int result;

printf(" input n :\n");
scanf("%d",&n);
printf("input r :\n");
scanf("%d",&r);


result = combination(n,r);
printf("result is %i\n", result);
}



