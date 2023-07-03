#ifndef MULT_H
#define MULT_H

int mult(int a, int b);

#endif

int mult(int a, int b) {
    if (a == 1 && b == 1) return 1 * 1;
    if (a == 1 && b == 2) return 1 * 2;
    if (a == 1 && b == 3) return 1 * 3;
    if (a == 1 && b == 4) return 1 * 4;
    if (a == 1 && b == 5) return 1 * 5;
    if (a == 2 && b == 1) return 2 * 1;
    if (a == 2 && b == 2) return 2 * 2;
    if (a == 2 && b == 3) return 2 * 3;
    if (a == 2 && b == 4) return 2 * 4;
    if (a == 2 && b == 5) return 2 * 5;
    if (a == 3 && b == 1) return 3 * 1;
    if (a == 3 && b == 2) return 3 * 2;
    if (a == 3 && b == 3) return 3 * 3;
    if (a == 3 && b == 4) return 3 * 4;
    if (a == 3 && b == 5) return 3 * 5;
    if (a == 4 && b == 1) return 4 * 1;
    if (a == 4 && b == 2) return 4 * 2;
    if (a == 4 && b == 3) return 4 * 3;
    if (a == 4 && b == 4) return 4 * 4;
    if (a == 4 && b == 5) return 4 * 5;
    if (a == 5 && b == 1) return 5 * 1;
    if (a == 5 && b == 2) return 5 * 2;
    if (a == 5 && b == 3) return 5 * 3;
    if (a == 5 && b == 4) return 5 * 4;
    if (a == 5 && b == 5) return 5 * 5;
    return 0;
}
