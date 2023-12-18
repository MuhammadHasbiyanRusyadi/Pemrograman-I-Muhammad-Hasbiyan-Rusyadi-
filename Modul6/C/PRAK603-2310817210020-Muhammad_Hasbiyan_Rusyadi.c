#include <stdio.h>
int main() {
    int baris1, baris2;
    printf("Masukkan Total bilangan baris pertama dan baris kedua : ");
    scanf("%d %d", &baris1, &baris2);
    int arr1[baris1];
    int arr2[baris2];
    if (baris1 == baris2) {
        printf("Masukkan angka baris pertama\t: ");
        for (int i = 0; i < baris1; i++) {
            scanf("%d", &arr1[i]);}
        printf("Masukkan angka baris kedua\t: ");
        for (int i = 0; i < baris2; i++) {
            scanf("%d", &arr2[i]);}
        printf("Hasil : \n");
        for (int a = 0; a < baris1 && a < baris2; a++) {
            int hasil = arr1[a] * arr2[a];
            printf("%d ", hasil);}
    } else {
        printf("Jumlah tidak sama");}
    return 0;}