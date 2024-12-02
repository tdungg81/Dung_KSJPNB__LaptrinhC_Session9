#include <stdio.h>

int main() {
    int array[100];
    int n = 0; 
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Thêm phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua ch?n cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap vao phan tu muon nhap: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &array[i]);
                }
                break;
            case 2:
                printf("Cac phan tu trong tung mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;
            case 3:
                if (n < 100) {
                    int new_value;
                    printf("Nhap vao gia tri moi: ");
                    scanf("%d", &new_value);
                    array[n++] = new_value;
                } else {
                    printf("Mang da day \n");
                }
                break;
            case 4:
                {
                    int position, new_value;
                    printf("Nhap vao vi tri can sua: ");
                    scanf("%d", &position);
                    if (position >= 0 && position < n) {
                        printf("Nhap vao gia tri moi: ");
                        scanf("%d", &new_value);
                        array[position] = new_value;
                    } else {
                        printf("Vi tri khong hop le\n");
                    }
                }
                break;
            case 5:
                {
                    int position;
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
                }
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
    } while (choice != 6);

    return 0;
}
