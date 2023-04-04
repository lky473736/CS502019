#include <stdio.h>

void cough(int n); // 함수의 프로토 타입 (실제 함수에서 그대로 가져온 첫 한줄)

int main(void)
{
    cough(3); // 추상화
}

void cough(int n) // int n을 집어넣어서 매개변수화 됨.
{
    for (int i = 0; i < n; i++)
    {
        printf ("cough\n");
    }
}