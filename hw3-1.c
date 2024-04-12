/*
최대 공약수(GCD), 최소 공배수(LCM)를 구하는 프로그램을 작성하시오.
최대 공약수(GCD)는 두 수의 공통된 약수 중 가장 큰 수를 의미하며, 최소 공배수(LCM)는 두 수의 공통된 배수 중 가장 작은 수를 의미한다.
두 수를 입력받아 최대 공약수(GCD)와 최소 공배수(LCM)를 출력하는 프로그램을 작성하시오.
단, 함수를 이용하여 작성하시오.

HINT : GCD는 재귀함수를 이용하여 작성할 수 있고, LCM은 GCD를 이용하여 계산할 수 있다.

입력
두 수가 입력된다. (1 <= a, b <= 1000)

출력
최대 공약수(GCD)와 최소 공배수(LCM)를 출력한다.
*/
#include <stdio.h>

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return GCD(b, a % b);
    }
}
int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

int main(void) {
    int a, b;
    
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &a, &b);
    
    printf("최대 공약수(GCD): %d \n", GCD(a, b));
    printf("최소 공배수(LCM): %d \n", LCM(a, b));
    
    return 0;
}

