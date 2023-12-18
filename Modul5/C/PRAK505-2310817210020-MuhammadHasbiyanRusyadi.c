#include <stdio.h>
void Biodata(int thnlahir, char Nama[], char Asal[]){
    int thnskrg = 2023;
    int umur = thnskrg - thnlahir;
    printf("\nPerkenalkan Nama Saya : %s\n", Nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", thnskrg);
    printf("Asal Saya dari : %s\n\n", Asal);}
int main() {
    int thnlahir;
    char Nama[20], Asal[15];
        printf("\nTahun lahir : ");
        scanf(" %d",&thnlahir);
        printf("Namaku : ");
        scanf(" %[^\n]%*c",&Nama);
        printf("Asal : ");
        scanf(" %[^\n]%*c",&Asal);
        Biodata(thnlahir, Nama, Asal);
return 0;}

