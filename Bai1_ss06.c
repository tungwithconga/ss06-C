#include <stdio.h>

int main() {
    int num, sum = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 != 0) {
            sum += num;
        }
    }

    printf("Tong cac so le: %d\n", sum);

    return 0;
}

