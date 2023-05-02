#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("scores number? :  ");

    int scores[n];
    int a_plus_number = 0;
    int a_number = 0;
    int b_plus_number = 0;
    int f_number = 0;

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("score %i : ", i + 1);
    }
    
    for (int j = 0; j < n; j++)
    {
        if (scores[j] >= 90)
        {
            a_plus_number += 1;
        }
        else if (70 <= scores[j] && scores[j] < 90)
        {
            a_number += 1;
        }
        else if (50 <= scores[j] && scores[j] < 70)
        {
            b_plus_number += 1;
        }
        else 
        {
            f_number += 1;
        }
    }

    printf ("A+ : %d\n", a_plus_number);
    printf ("A : %d\n", a_number);
    printf ("B+ : %d\n", b_plus_number);
    printf ("F : %d\n", f_number);

    return 0;
}
