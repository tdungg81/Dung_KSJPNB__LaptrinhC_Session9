#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int position, newvalue;

    printf("Nhap vao vi tri can sua: ");
    scanf("%d", &position);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newvalue);

    if (position >= 0 && position < size) {
        array[position] = newvalue;
    } else {
        printf("Vi tri khong hop le\n");
    }

    printf("Mang sau khi sua: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
