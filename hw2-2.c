/*
로또 번호 생성기를 작성하시오.
로또 번호는 1부터 45까지의 숫자 중 6개를 랜덤으로 생성한다.
중복된 숫자가 있으면 안된다.
생성된 로또 번호 100set를 출력하시오.

출력 예 :
set1 : 1 2 3 4 5 6
set2 : 10 12 13 14 15 16
...
set100 : 1 2 3 4 5 6
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define set 100
#define num_per_set 6

int main(void){
    int num;
    int duplicate;
    srand((unsigned)time(NULL));
    for (int i = 1; i <= set; i++) {
        printf("set%d: ", i);
        for(int j = 0; j < num_per_set; j++){
            num = rand() % 45 + 1;
            do {
                num = rand() % 45 + 1;
                duplicate = 0;
                for (int k = 0; k < j; k++) {
                    int prev_num = rand() % 45 + 1;
                    if (num == prev_num) {
                        duplicate = 1;
                        break;
                    }
                }
                }while (duplicate);
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}

