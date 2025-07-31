#include <stdio.h>

int main() {
    int i = 1, j = 2, k;

    // บรรทัดที่ 1: i = 1, j = 2, k ยังไม่กำหนด
    printf("1: i = %d, j = %d, k = ไม่กำหนด\n", i, j);

    k = i + j;  // บรรทัดที่ 2: k = 1 + 2 = 3
    printf("2: i = %d, j = %d, k = %d\n", i, j, k);

    i = j + (k * j);  // บรรทัดที่ 3: i = 2 + (3 * 2) = 2 + 6 = 8
    printf("3: i = %d, j = %d, k = %d\n", i, j, k);

    j = i / 2;  // บรรทัดที่ 4: j = 8 / 2 = 4
    printf("4: i = %d, j = %d, k = %d\n", i, j, k);

    k = i % 2;  // บรรทัดที่ 5: k = 8 % 2 = 0
    printf("5: i = %d, j = %d, k = %d\n", i, j, k);

    i = (j + k) * 3;  // บรรทัดที่ 6: i = (4 + 0) * 3 = 12
    printf("6: i = %d, j = %d, k = %d\n", i, j, k);

    return 0;
}