#include <stdio.h>

long fibonacci(long number){
    if (number == 0 || number == 1)
    {
        return number;
    }
    else{
        return fibonacci(number-1) + fibonacci(number-2);
    }
    
    
}

int main(){
    long result, n;

    printf("enter an integer: ");
    scanf("%ld", &n);
    result = fibonacci(n);
    printf("fibonnaci(%ld) = %ld\n", n, result);
    return 0;
    
}
