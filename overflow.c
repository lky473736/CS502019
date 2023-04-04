#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 1; ; i *= 2) // 불리언 표현을 안적었기 때문에 영원히 반복
    {
        printf ("%i\n", i);
        sleep(1);
    }
}