#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int arr[a][b];
        for(int y = 0 ; y < a ; y++) {
            for(int z = 0 ; z < b ; z++){
                scanf("%d", &arr[y][z]);}}
        for(int y = 0 ; y < a ; y++) {
            for(int z = 0 ; z < b ; z++){
                printf("%d ", arr[y][z]);}
            printf("\n");}
        return 0;}