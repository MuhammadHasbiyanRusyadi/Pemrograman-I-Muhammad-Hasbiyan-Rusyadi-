#include <stdio.h>
int reverse(int angka){
    int rvrsd = 0;
    while(angka != 0) {
        rvrsd = (rvrsd) * 10 + (angka % 10) ;
        angka /= 10;}
    return rvrsd;}
int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A = reverse(A);
    B = reverse(B);
    int C = A+B;
    printf("%d",reverse(C));}