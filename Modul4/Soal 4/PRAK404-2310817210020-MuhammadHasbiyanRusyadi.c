#include<stdio.h>
int main() {
    int P;
    float n1,n2;
    do {printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &P);
        if (P >= 1 && P <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &n1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &n2);
            switch (P) {
                case 1:
                    printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", n1, n2, n1 + n2);
                    break;
                case 2:
                    printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", n1, n2, n1 - n2);
                    break;
                case 3:
                    printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", n1, n2, n1 * n2);
                    break;
                case 4:
                    if (n2 != 0) {
                        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", n1, n2, n1 / n2);} 
                        else {
                        printf("Error: Pembagian dengan nol tidak diizinkan.\n");}
                    break;}} 
        else if (P == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Hasbiyan Rusyadi\n");} 
        else {
            printf("Input anda salah, silahkan coba lagi\n");}} 
    while (P != 5);}