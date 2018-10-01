#include <stdio.h>

float tinhdiemtrungbinh(int diemcacmon[], int tongsomon){
    int tongdiem = 0;
    for (int i = 0; i <tongsomon ; ++i) {
        tongdiem += diemcacmon[i];
    }
    return (float) tongdiem/tongsomon;
}

int main() {
    int tongsomon;
    printf("vui long nha tong so mon: ");
    scanf("%d", &tongsomon);
    int diemcacmon[tongsomon];

//int tongsomon = 6;
//int diemcacmon[tongsomon];
    for (int i = 0; i < tongsomon ; i++) {
        printf("vui long nhap gia tri cho cac phan tu thu %d\n", i + 1);
        scanf("%d", &diemcacmon[i]);
    }
    printf("In cac phan tu trong mang\n");
    for (int j = 0; j < tongsomon; ++j) {
        printf("gia tri cua ac phan tu thu %d la %d\n", j + 1, diemcacmon[j]);
    }printf("diem trung binh la %.2f", tinhdiemtrungbinh(diemcacmon, tongsomon));
    return 0;

}