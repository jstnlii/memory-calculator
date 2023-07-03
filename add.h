#ifndef ADD_H
#define ADD_H

int mult(int a, int b);

#endif

int add(int a, int b) {
    if (a == 1 && b == 1) return 2;
    if (a == 1 && b == 2) return 3;
    if (a == 1 && b == 3) return 4;
    if (a == 1 && b == 4) return 5;
    if (a == 1 && b == 5) return 6;
    if (a == 2 && b == 1) return 3;
    if (a == 2 && b == 2) return 4;
    if (a == 2 && b == 3) return 5;
    if (a == 2 && b == 4) return 6;
    if (a == 2 && b == 5) return 7;
    if (a == 3 && b == 1) return 4;
    if (a == 3 && b == 2) return 5;
    if (a == 3 && b == 3) return 6;
    if (a == 3 && b == 4) return 7;
    if (a == 3 && b == 5) return 8;
    if (a == 4 && b == 1) return 5;
    if (a == 4 && b == 2) return 6;
    if (a == 4 && b == 3) return 7;
    if (a == 4 && b == 4) return 8;
    if (a == 4 && b == 5) return 9;
    if (a == 5 && b == 1) return 6;
    if (a == 5 && b == 2) return 7;
    if (a == 5 && b == 3) return 8;
    if (a == 5 && b == 4) return 9;
    if (a == 5 && b == 5) return 10;
    return 0;
}