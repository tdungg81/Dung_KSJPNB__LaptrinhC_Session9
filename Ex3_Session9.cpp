#include <stdio.h>

int main() {
    int array[100];
    int n, position;

    printf("Nhap vao so phan tu muon nhap: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Nhap vao vi tri can xoa: ");
    scanf("%d", &position);

    if (position >= 0 && position < n) {
        for (int i = position; i < n - 1; i++) {
            array[i] = array[i + 1];
        }
        n--;
    } else {
        printf("Vi tri khong hop le!\n");
    }

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
