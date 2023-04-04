#include <stdio.h>

void cough();

int main(void)
{
    cough(); // 추상화
}

void cough(void) // 사용자 지정 함수
{
    for (int i = 0; i < 3; i++)
    {
        printf ("cough\n");
    }
}

// 원래는 사용자 지정 함수는 반드시 int main 위에 있어야 함
// 하지만 미관 상 사용자 지정 함수를 아래로 내리고 싶다면
// int main 위에 지정함수();를 한다.