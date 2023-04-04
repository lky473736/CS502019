#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf ("%i\n", i);
}

// void : 입출력이 없다

int get_positive_int(void) // 함수 왼쪽 : 출력의 종류, 괄호 안 : 입력의 종류
{
    int n;
    do
    {
        n = get_int("Positive Integer : ");
    }
    while (n < 1);
    // do - while : 괄호 안의 불리언 표현이 참일때까지 do를 실행해라.
    // while문과의 차이점 : do - while문은 조건을 나중에 확인해서 무조건 한 번은 먼저 수행할 수 있음.
    return n;
}