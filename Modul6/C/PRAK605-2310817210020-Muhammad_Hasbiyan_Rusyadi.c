#include <stdio.h>
void main() {
    int ordo,baris1,baris2;
    printf("Masukkan jumlah ordo matriks : ");
    scanf("%d", &ordo);
    int arrA[ordo][ordo];
    int arrB[ordo][ordo];
    printf("Matriks A : \n");
    for (int i = 0 ; i < ordo ; i++) {
        for (int j = 0 ; j < ordo ; j++) {
        scanf("%d", &arrA[i][j]);}}
    printf("Matriks B : \n");
    for (int i = 0 ; i < ordo ; i++) {
        for(int j = 0 ; j < ordo ; j++) {
            scanf("%d", &arrB[i][j]);}}
    int hsl[ordo][ordo];
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            hsl[i][j] = 0;
            for (int h = 0; h < ordo; h++) {
                hsl[i][j] += arrA[i][h] * arrB[h][j];}}}
    printf("Matriks AXB : \n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("%d ", hsl[i][j]);}
        printf("\n");}}