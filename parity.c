#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("What's the number?\n");
    if (a % 2 == 0)
    {
        printf ("even number\n");
    }
    else
    {
        printf ("odd number\n");
    }
}

// cd : change directory
// || : or 연산자
// && : and 연산자