#include<stdio.h>
int main() {
    int a, z;
    scanf("%d %d", &a, &z);
    int total = 0;
    for (int i = 1; i <= a; i++) {
        int tot = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, z);
            tot += j * z;
            if (j > 1) {
                printf(" + ");}}
        total += tot;
        printf(" = %d\n", tot);}
printf("%d", total);}