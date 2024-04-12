/*
피보나치 수열을 재귀함수로 구현하고, n번째 피보나치 수를 출력하는 프로그램을 작성하시오.

ex)
input: 10
output: 55
*/
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main (void) {
    int n;
    printf("input: ");
    scanf("%d", &n);
    printf("output: %d ", fibonacci(n));
    printf("\n");
    return 0;
}
