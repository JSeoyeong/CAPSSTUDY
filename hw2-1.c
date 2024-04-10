/*
계산기 프로그램을 작성하시오.
단, 모든 구성 요소를 함수를 이용해 구현한다. 에를 들어 다음과 같은 함수가 존재할 수 있다.
int add(int a, int b);
int mod(int a, int b);
void menu(void);

무한 루프를 통해 '!' 연산자를 받기 전까지 계속 실행하게 할 것.
*/

#include <stdio.h>

int add(int x, int y) {
    return x+y;
}
int sub(int x, int y) {
    return x-y;
}
int mul(int x, int y) {
    return x*y;
}
int division(int x, int y) {
    if (y != 0) {
        return x/y;
    }
    else {
        printf("0으로 나눌 수 없습니다.\n");
        return 0;
    }
}
void menu(void){
    printf("1. Add(+) \n");
    printf("2. Sub(-) \n");
    printf("3. Mul(*) \n");
    printf("4. Div(/) \n");
    printf("5. 종료(!) \n");
}

int main(void) {
    char op;
    int x, y;
    do {
        menu();
        printf("연산을 선택하시오(+, -, *, /, !): ");
        scanf(" %c", &op);
        
        printf("두 개의 정수를 입력하시오: ");
        scanf("%d %d", &x, &y);
        
        switch (op) {
            case '+':
                printf("\n");
                printf("%d + %d = %d \n", x , y, add(x, y));
                break;
            case '-':
                printf("\n");
                printf("%d - %d = %d \n", x , y, sub(x, y));
                break;
            case '*':
                printf("\n");
                printf("%d * %d = %d \n", x , y, mul(x, y));
                break;
            case '/':
                printf("\n");
                printf("%d / %d = %d \n", x , y, division(x, y));
                break;
            case '!':
                printf("\n");
                printf("프로그램을 종료합니다. \n");
                break;
            default:
                printf("잘못된 연산자입니다. \n");
                break;
        }
    }while(op != '!');
    
    return 0;
}

