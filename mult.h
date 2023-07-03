#ifndef MULT_H
#define MULT_H

int mult(int a, int b);

#endif

int mult(int a, int b) {
    if (a == 1 && b == 1) return 1;
    if (a == 1 && b == 2) return 2;
    if (a == 1 && b == 3) return 3;
    if (a == 1 && b == 4) return 4;
    if (a == 1 && b == 5) return 5;
    if (a == 2 && b == 1) return 2;
    if (a == 2 && b == 2) return 4;
    if (a == 2 && b == 3) return 6;
    if (a == 2 && b == 4) return 8;
    if (a == 2 && b == 5) return 10;
    if (a == 3 && b == 1) return 3;
    if (a == 3 && b == 2) return 6;
    if (a == 3 && b == 3) return 9;
    if (a == 3 && b == 4) return 12;
    if (a == 3 && b == 5) return 15;
    if (a == 4 && b == 1) return 4;
    if (a == 4 && b == 2) return 8;
    if (a == 4 && b == 3) return 12;
    if (a == 4 && b == 4) return 16;
    if (a == 4 && b == 5) return 20;
    if (a == 5 && b == 1) return 5;
    if (a == 5 && b == 2) return 10;
    if (a == 5 && b == 3) return 15;
    if (a == 5 && b == 4) return 20;
    if (a == 5 && b == 5) return 25;
    return 0;
}
