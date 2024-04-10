/*
재귀 함수를 이용한 팩토리얼 계산기를 작성하시오.

ex)
input: 5
output: 120
*/

#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
int main(void) {
    int number;
    printf("input: ");
    scanf("%d", &number);
    
    printf("output: %d \n", factorial(number));
    
    return 0;
}

