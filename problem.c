#include <stdio.h>

int main() {
    int a, b, c, d, result_a = 0, result_b = 0, result_c = 0, remain = 0;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &d);

    result_a = d / 3600;
    remain = d % 3600;
    result_b = remain / 60;
    result_c = remain % 60;

    c += result_c;
    if (c >= 60) {
        b += c / 60;
        c %= 60;
    }
    b += result_b;
    if (b >= 60) {
        a += b / 60;
        b %= 60;
    }
    a += result_a;

    if (a >= 24) {
        a %= 24;
    }

    printf("%d %d %d", a, b, c);

    return 0;
}
