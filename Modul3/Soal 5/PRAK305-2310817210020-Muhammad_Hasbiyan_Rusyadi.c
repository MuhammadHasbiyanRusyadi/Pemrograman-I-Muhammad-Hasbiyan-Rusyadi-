#include<stdio.h>
int main(){
    int dtk;
    scanf("%d", &dtk);
    int jam = dtk / 3600;
    int ssdtk = dtk % 3600;
    int menit = ssdtk / 60;
    int d = ssdtk % 60;
    int hari = jam / 24;
    int j = jam % 24;
    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, j, menit, d);}
        else {
        printf("%02d:%02d:%02d\n", jam, menit, d);}}