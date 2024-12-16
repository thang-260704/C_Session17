#include <stdio.h>
#include <ctype.h>

void nhapChuoi(char *str) {
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin); 
    str[strcspn(str, "\n")] = '\0'; 
}

void inChuoi(char *str) {
    printf("Chuoi vua nhap la: %s\n", str);
}

int demChuCai(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int demChuSo(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int demKyTuDacBiet(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isalpha(*str) && !isdigit(*str) && *str != ' ' && *str != '\0') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai\n");
        printf("4. Dem so luong chu so\n");
        printf("5. Dem so luong ky tu dac biet\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapChuoi(str);
                break;
            case 2:
                inChuoi(str);
                break;
            case 3:
                printf("So luong chu cai: %d\n", demChuCai(str));
                break;
            case 4:
                printf("So luong chu so: %d\n", demChuSo(str));
                break;
            case 5:
                printf("So luong ky tu dac biet: %d\n", demKyTuDacBiet(str));
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