#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arrray[n]; 

     printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i );
        scanf("%d", &arrray[i]);
    }

     printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrray[i]);
    }
      printf("\n");

    return 0;
}
