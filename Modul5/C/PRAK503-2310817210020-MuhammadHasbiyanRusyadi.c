#include <stdio.h>
int maksimal(int x, int y){
    if (x > y) {
    return x;}
    else  {
    return y;}}
int minimal(int x, int y){
    if (x < y) {
    return x;}
    else {
    return y;}}
int main(){
    int batas = 0;
    int max = -100000;
    int min = 100000;
    int angka;
    scanf("%d", &angka);
    while(batas < angka){
      int nilai;
        scanf("%d", &nilai); 
        max = maksimal(max, nilai);
        min = minimal(min, nilai);
        batas++;}
    printf("%d %d",max,min); }

