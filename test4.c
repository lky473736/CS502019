#include <stdio.h>
#include <stdlib.h>
#include <time.h> // 시간에 따라 rand 수열 리셋을 위해 time.h 필요

void bubblesort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) { // cycle를 반복시키기 위해
        for (j = 0; j < n-i-1; j++) { // 요소 단위로 하나씩 이동
            if (arr[j] > arr[j+1]) { // arr[j]가 arr[j+1]보다 크면 
                // arr[j]와 arr[j+1]을 교환
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int i;

    srand(time(0));

    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 100; 
    }

    printf("원본 : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    bubblesort(arr, 10);

    printf("\n");
    printf("정렬 : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
