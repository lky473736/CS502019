#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("what's your age?\n");
    int days = age * 365;

    printf("You are at least %i days old.\n", days);

    // 아예 위의 코드를 한 줄로 최적화해도 된다.
    // printf ("You are at least %i days old.\n", get_int("what's your age?"))
    // 변수를 없애고 바로 실행
}