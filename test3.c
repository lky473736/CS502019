#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cs50.h>

int main(void) 
{
    srand(time(NULL)); // 난수 초기화
    int score = 0;

    while (score < 5)
    {
        printf ("현재 점수 : %d\n", score);
        int choice = get_int("가위, 바위, 보! (가위 : 0 / 바위 : 1 / 보 : 2)\n");

        int random = rand() % 3;

        if (random == 0) // 가위
        {
            printf ("가위\n");
            if (choice == 0)
            {
                printf ("비김\n");
            }

            else if (choice == 1)
            {
                score = score + 1;
                printf ("이김\n");
            }

            else
            {
                printf ("짐\n");
            }
        }

        else if (random == 1) // 바위
        {
            printf ("바위\n");
            if (choice == 0)
            {
                printf ("짐\n");
            }

            else if (choice == 1)
            {
                printf ("비김\n");
            }

            else
            {
                score = score + 1;
                printf ("이김\n");
            }
        }

        else // 보
        {
            printf ("보\n");
            if (choice == 0)
            {
                score = score + 1;
                printf ("이김\n");
            }

            else if (choice == 1)
            {
                printf ("짐\n");
            }

            else
            {
                printf ("비김\n");
            }
        }
    }

    printf ("5점 채우기 완료\n");

    return 0;
}