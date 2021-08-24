#include <stdio.h>

int reverse(int n){
    
   static int r=0;  // static holds the value for multiple Fcalls
    if (n ==0)
    return 0;
    
    r = r * 10;
    r = r + n%10;
    reverse(n/10);  // calling fucntion here (recursion)
    return r;
}

int main()
{

    int a=456;
    int c;
    c = reverse(456);

    printf("Reverse of the number = %d\n", c);

  return 0;
}
