#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float price = get_float("What's the price?\n");
    printf ("Your total is %.2f\n", price * 1.0625); // %.~f : 소수점 ~자리수까지 표현
}