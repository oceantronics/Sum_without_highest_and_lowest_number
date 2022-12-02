#include <stdio.h>

int sum(int* numbers, int numbersCount);

int main() {
    int array1[] = { 6, 2, 1, 8, 10 };
    printf("%d\n", sum(array1, 5));
    return 0;
}

int sum(int* numbers, int numbersCount)
{
    if (numbersCount == 1 || numbersCount == 0) return 0;

    int s = numbers[0], max = numbers[0], min = numbers[0];
    for (int i = 1; i < numbersCount; ++i) {
        s += numbers[i];
        max = numbers[i] > max ? numbers[i] : max;
        min = numbers[i] < min ? numbers[i] : min;
    }
    return s - max - min;
}
