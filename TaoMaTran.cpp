#include <stdio.h>

int main() {
    int hang, cot;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &hang);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cot);
    int a[hang][cot];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
