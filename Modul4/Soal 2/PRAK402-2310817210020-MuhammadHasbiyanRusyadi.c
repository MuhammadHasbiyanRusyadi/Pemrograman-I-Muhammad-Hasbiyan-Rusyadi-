#include<stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    if ( n % 2 == 0){
    for(int angka = 1; angka <= n; angka += 2){
            printf("%d ", angka);} 
            printf("\n");
    for(int angka = n; angka >= 2; angka -= 2){
            printf("%d ", angka);}}
    if ( n % 2 != 0 ){
    for (int angka = 1; angka <= n; angka += 2) {
        printf("%d ", angka);} 
            printf("\n");
    for (int angka = n - 1; angka >= 2; angka -= 2) {
        printf("%d ", angka);}} }