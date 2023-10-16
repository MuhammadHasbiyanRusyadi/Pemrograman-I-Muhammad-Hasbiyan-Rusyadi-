#include<stdio.h>
int main()   {
    float a; 
    float b; 
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &b);
    float hasil = a + b;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", a, b, hasil);
    return 0; }