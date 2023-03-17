#include <stdio.h>

int main() {
    int primes[] = {2, 3, 5, 7, 11}; // создаем массив из 5 простых чисел
    int reversed[5]; // создаем пустой массив для обратного порядка
    
    for (int i = 0; i < 5; i++) {
        reversed[4-i] = primes[i]; // записываем числа в обратном порядке
    }
    
    // выводим числа из обратного массива в консоль
    printf("Numbers in reverse order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");
    
    return 0;
}
