#include <stdio.h>
#include <stdbool.h>

int my_exp1(int x, int y) {
    int res = x + y + 1;
    printf("%d", res);
    return res;
}

int my_exp2(int x, int y, int z) {
    int res = z * z + y * 45 - 15 * x;
    printf("%d", res);
    return res;
}

bool my_exp3(int x, int y) {
    bool res = (y - 2)  == (x * 3 + 1) % 5;
    printf("%d", res);
    return  res;
}

int my_exp4(int x, int y) {
    int res = y / 2 * x;
    printf("%d", res);
    return res;
}

bool my_exp5(int x, int y, int z) {
    bool res = y < x * z;
    printf("%d", res);
    return res;
}