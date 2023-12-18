#include <stdio.h>
int mutlak(int angka) {
    if (angka < 0) {
        angka *= -1;}
    return angka;}

int hitung(int nilai1, int nilai2) {
    int hasil = nilai1 - nilai2;
    if (hasil < 0) {
        hasil *= -1;}
    return hasil;}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    int hasil = hitung(a, b) + hitung(c, d);
    printf("%d\n", hasil);
    return 0;}
