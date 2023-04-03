#include <stdio.h>

int main(void)
{
    printf("hello, world!\n");
}

// psudo code -> programming -> source code -> compiler -> machine code
// 터미널에서 $ : 프롬프트
// ls : 리스트를 출력함
// rm ~ : ~ 파일을 리스트에서 지움
// clang ~ : ~ 파일을 compile 시킴 
// clang -o hello topic2-hello.c : topic2-hello.c 파일을 hello라는 이름의 machine code 파일로 컴파일시킴 
// ./~ : ~ 파일을 실행시킴 (이때 ~은 machine code여야 함.)