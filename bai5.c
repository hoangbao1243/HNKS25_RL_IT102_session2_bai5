#include <stdio.h>

int main() {
    float distance;
    int has_promo;
    float total_fare;

    printf("Nhap quang duong (km): ");
    scanf("%f", &distance);

    printf("Co ma giam gia? (1: Co, 0: Ko): ");
    scanf("%d", &has_promo);

    if (distance <= 0 || (has_promo != 0 && has_promo != 1)) {
        printf("Loi Du lieu dau vao khong hop le");
    } else {
        total_fare = distance * 20000;
        if (has_promo == 1) {
            total_fare = total_fare * 0.8;}
        if (total_fare < 15000) {
            total_fare = 15000;}

        printf("Tong cuoc phi: %.2f VNĐ", total_fare);
    }
    return 0;
}
