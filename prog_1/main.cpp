#include <iostream>
#include "Matrix.h"
#include "cstdio"

enum namesOfMatrix {
    A, B, C, D,
};

int main() {
    int outputMode;
    scanf("%d", &outputMode);
    if (outputMode == 1) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    int size;
    scanf("%d", &size);
    int k;
    scanf("%d", &k);
    int*** buffer = new int**[4];
    for (int i = 0; i < 1; ++i) {
        buffer[i] = new int*[size];
        for (int j = 0; j < size; ++j)
            buffer[i][j] = new int[size];
    }
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int l = 0; l < size; ++l) {
                scanf("%d", &buffer[i][j][l]);
            }
        }
    }
    // Пытался через массив матриц, но выдавало сигсег, так что лучше так
    Matrix a = Matrix(size, buffer[0]);
    Matrix b = Matrix(size, buffer[1]);
    Matrix c = Matrix(size, buffer[2]);
    Matrix d = Matrix(size, buffer[3]);
    Matrix km = Matrix(size, k);
    +((a + b * ~c + km) * ~d);
//TEST
//    a[1][1] = 5;
//    a(1)[1] = -1;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j)
//            printf("%d ", a[i][j]);
//        printf("\n");
//    }
}
