#include<stdio.h>
int main (){
    int a1,a2;
    scanf("%d %d",&a1, &a2);
    if (a1 > a2) {
        for (int i = a1, j = a2; i > a2; i--,j++) {
            printf("%d %d - ",i, j);}} 
    else {
        for (int i = a1, j = a2; i < a2; i++, j--) {
            printf("%d %d - ",i, j);}}
    printf("%d %d",a2, a1);}