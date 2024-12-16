#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhapChuoi(char *str) {
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void daoNguocChuoi(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int demSoTu(char *str) {
    int count = 0, i = 0;
    while (str[i] != '\0') {
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }
        if (str[i] != '\0') {
            count++;
            while (str[i] != ' ' && str[i] != '\0') {
                i++;
            }
        }
    }
    return count;
}

void inHoa(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void noiChuoi(char *str1, char *str2) {
    strcat(str1, str2);
}

int main() {
    char str[100], str2[100];
    int choice;

    do {
        switch (choice) {

            case 6:
                daoNguocChuoi(str);
                printf("Chuoi dao nguoc: %s\n", str);
                break;

            case 7:
                printf("So luong tu trong chuoi: %d\n", demSoTu(str));
                break;

            case 8:
                nhapChuoi(str2);
                if (strcmp(str, str2) < 0) {
                    printf("Chuoi ban dau ngan hon chuoi moi\n");
                } else if (strcmp(str, str2) > 0) {
                    printf("Chuoi ban dau dai hon chuoi moi\n");
                } else {
                    printf("Hai chuoi bang nhau\n");
                }
                break;

            case 9:
                inHoa(str);
                printf("Chuoi sau khi in hoa: %s\n", str);
                break;

            case 10:
                nhapChuoi(str2);
                noiChuoi(str, str2);
                printf("Chuoi sau khi noi: %s\n", str);
                break;
        }
    } while (choice != 11); 

    return 0;
}