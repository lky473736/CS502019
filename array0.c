/* 
bool : 1 byte
char : 1 byte : 따옴표
int : 4 bytes
float : 4 bytes
long : 8 bytes
double : 8 bytes : 쌍따옴표
string : ? bytes
*/

#include <stdio.h>

int main(void)
{
    char carray[3]; // 공간 3개까지 array 만듦
    carray[0] = 'h';
    carray[1] = 'i';
    carray[2] = '!';
    printf ("%c %c %c\n", carray[0], carray[1], carray[2]);
}