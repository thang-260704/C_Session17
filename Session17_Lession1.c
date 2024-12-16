#include <stdio.h>

void nhapMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void xuatMang(int *arr, int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int tinhDoDai(int *arr) {
    int n = 0;
    while (*(arr + n) != '\0') { 
        n++;
    }
    return n;
}

int tinhTong(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int timMax(int *arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[100], n, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                nhapMang(arr, n);
                break;
            case 2:
                xuatMang(arr, n);
                break;
            case 3:
                printf("Do dai mang la: %d\n", tinhDoDai(arr));
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", tinhTong(arr, n));
                break;
            case 5:
                printf("Phan tu lon nhat trong mang la: %d\n", timMax(arr, n));
                break;
            case 6:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}