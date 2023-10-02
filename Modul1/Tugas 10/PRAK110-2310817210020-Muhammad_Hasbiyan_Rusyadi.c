#include<stdio.h>
#include<math.h>
int main() {
    int a = 12, c = 5;
    int b = sqrt ( a*a + c*c );
    printf("Diketahui : \n");
    printf("Alas = %d cm\nTinggi = %d cm\n\n", a,c);
    printf("Jawab : \n");
    printf("Sisi A = %d cm\nSisi B = %d cm\nSisi C = %d cm\n", a,b,c);
    printf("Keliling = %d cm\n", a+b+c);
    printf("Luas = %d ", a*c/2); }
