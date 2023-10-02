#include<stdio.h>
int main() {
    int a = 400000;
    int b = 350000;
    int x = 13;
    int y = 21;
    int sum1 = a*x/100;
    int sum2 = a*y/100;
    int sum3 = a-sum1;
    int sum4 = a-sum2;
    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", sum3);
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %d", sum4); }