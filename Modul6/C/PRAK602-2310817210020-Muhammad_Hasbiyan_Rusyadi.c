#include<stdio.h>
void zetsu(int ruangan, int jumlahzetsu[], int total[]) {
    for (int i = 0; i < ruangan; ++i) {
        total[i] = jumlahzetsu[i]*(i + 1);}}
int main() {
    int ruangan;
    scanf("%d", &ruangan);
    int jumlahzetsu[ruangan];
    int total[ruangan];
    for (int i = 0; i < ruangan; ++i) {
        scanf("%d", &jumlahzetsu[i]);}
    zetsu(ruangan, jumlahzetsu, total);
    for (int i = 0; i < ruangan; ++i) {
        printf("%d ", total[i]);}
    return 0;}