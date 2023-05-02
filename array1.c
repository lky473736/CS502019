#include <stdio.h>

// const : 전역변수 선언 (int main 전에 선언)

const int N = 3;

int main(void) 
{
    int scores[N];
    scores[0] = 1;
    scores[1] = 2;
    scores[2] = 3;

    printf ("%d %d %d \n", scores[0], scores[1], scores[2]);
}