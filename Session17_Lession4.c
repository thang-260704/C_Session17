#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SoNguyenTo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int choice;
    int size;
    int *arr = NULL;

    do {
        printf("MENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");

        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &size);
                arr = (int *)malloc(size * sizeof(int));
                printf("Nhap tung phan tu: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Cac phan tu la so chan: ");
                for (int i = 0; i < size; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            case 3:
                printf("Cac phan tu la so nguyen to: ");
                for (int i = 0; i < size; i++) {
                    if (SoNguyenTo(arr[i])) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            case 4:
                printf("Mảng sau khi đảo ngược: ");
                for (int i = size - 1; i >= 0; i--) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                printf("Ket thuc chuong trinh. Goodbye!\n");
                free(arr); 
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }

    } while (choice != 7);

    return 0;
}