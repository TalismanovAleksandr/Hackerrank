#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int tempA = *a + *b;
    *b = abs(*a - *b);
    *a = tempA;
}

int abs(int value) {
    if (value < 0) {
        return -value;
    }
    return value;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}