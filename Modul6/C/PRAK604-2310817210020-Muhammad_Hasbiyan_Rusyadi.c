#include <stdio.h>
#include <string.h>
int main() {
    char baris1[50],baris2[50];
    printf("Masukkan kalimat baris pertama : ");
    scanf(" %[^\n]", &baris1);
    printf("Masukkan kalimat baris kedua : ");
    scanf(" %[^\n]", &baris2);
    printf("\n");
    size_t sizebaris1 = strlen(baris1);
    size_t sizebaris2 = strlen(baris2);
    if(sizebaris1 == sizebaris2) {
        size_t i = 0;
        size_t j = 0;
        int ttlasterisk = 0;
        int ttlhashtag = 0;
        while(i < sizebaris1 && j < sizebaris2) {
            if(baris1[i] == ' ' && baris2[j] == ' '){
                i++;
                j++;
                continue;}
            if(baris1[i] == baris2[j]) {
                printf("*");
                ttlasterisk++;}
            else {
                printf("#");
                ttlhashtag++;}
            i++;
            j++;}
        printf("\n* = %d\n", ttlasterisk);
        printf("# = %d\n", ttlhashtag);
        if (ttlasterisk >= ttlhashtag) {
            printf("Pesan Asli");}
        else {
            printf("Pesan Palsu");}}
    else {
        printf("Panjang kalimat berbeda, pesan palsu");}}