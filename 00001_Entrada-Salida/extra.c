
#include <stdio.h>
#include <stdbool.h>


int my_exp1(int x, int y, int z) {
    return x + y + 1;
}

int my_exp2(int x, int y, int z) {
    return z * z + y * 45 - 15 * x;
}

bool my_exp3(int x, int y, int z) {
    return  (y - 2)  == (x * 3 + 1) % 5;
}

int my_exp4(int x, int y, int z) {
    return y / 2 * x;
}

bool my_exp5(int x, int y, int z) {
    return y < x * z;
}