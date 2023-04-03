#include <stdio.h>
#include <cs50.h>

// 1) cs50.h 추가
// 2) 다시 한번 프롬프트에서 cs50.h를 선언해주어야 함
// -> clang -o string string.c -lcs50

// 간단하게 'make' 사용
// make ~ : clang이나 -l 필요 없이 한번에 machine code를 만듦

int main(void)
{
    string answer = get_string("What's your name?\n");
    printf("%s\n", answer);
}