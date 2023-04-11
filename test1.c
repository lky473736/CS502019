#include <stdio.h>
#include <cs50.h>

int main(void)
{
    while (true)
    {
    int n = get_int("n을 입력하세요 : \n");
    if (n != 0)
    {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
        int sum = (n*(n+1))/2;
        printf("별의 총 갯수는 %d개입니다.\n", sum);
    }
    else 
    {
        printf ("0이기 때문에 프로그램을 종료합니다."); // 음수는?
        return 0;
    }
    }
}
