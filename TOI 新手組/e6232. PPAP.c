#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int r = 1;
    while (2 * r * (r + 1) < N) {
        r++;
    }
    int prev_total = 2 * (r - 1) * r;
    int k = N - prev_total - 1;

    int block = k / r;  

    switch (block) {
        case 0:
            printf("Pen");
            break;
        case 1:
            printf("Pineapple");
            break;
        case 2:
            printf("Apple");
            break;
        case 3:
            printf("Pineapple pen");
            break;
    }
    return 0;
}