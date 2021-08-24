#include <stdio.h>

int sumnatural(int num){
    
    if (num==0)
    return 0;
    else
    return num+sumnatural(num-1);
    
}

int main()
{
    int a=5;
    int result;
    result = sumnatural(a);
    printf("%d",result);
    return 0;
}
