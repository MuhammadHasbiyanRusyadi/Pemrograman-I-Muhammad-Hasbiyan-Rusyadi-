#include<stdio.h>
int main() 
 { char nama[40], nim[20], kelas[10], tempatlahir[30], tanggallahir[20], alamat[50], hobby[30], nohp[20];

    printf("Nama : ");
    gets(nama);
    printf("NIM : ");
    gets(nim);
    printf("Kelas Paralel : ");
    gets(kelas);
    printf("Tempat Lahir : ");
    gets(tempatlahir);
    printf("Tanggal Lahir (dd-mm-yyyy) : ");
    gets(tanggallahir);
    printf("Alamat : ");
    gets(alamat);
    printf("Hobby : ");
    gets(hobby);
    printf("No. HP : ");
    gets(nohp);

     printf("Nama                 : %s\n", nama);
     printf("NIM                  : %s\n", nim);
     printf("Kelas Paralel        : %s\n", kelas);
     printf("Tempat/Tanggal Lahir : %s/%s\n", tempatlahir, tanggallahir);
     printf("Alamat               : %s\n", alamat);
     printf("Hobby                : %s\n", hobby);
     printf("No. HP               : %s\n", nohp);

    return 0;     }