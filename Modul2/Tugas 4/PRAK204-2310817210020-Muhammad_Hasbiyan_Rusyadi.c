#include<stdio.h>
int main (){
        float phi = 3.142857;
        float r, t;
    scanf("%f %f", &r, &t);
    printf("Volume : %.2f \n", phi * r * r * t);
    printf("Luas : %.2f \n",2 * phi * r * (r + t));
    printf("Keliling : %.2f", 2 * phi  *r); }