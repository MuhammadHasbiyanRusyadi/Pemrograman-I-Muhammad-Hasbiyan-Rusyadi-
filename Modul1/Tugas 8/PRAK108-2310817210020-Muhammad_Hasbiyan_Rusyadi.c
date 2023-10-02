#include<stdio.h>
int main () {
    int p = 5;
    float jl = 14.00;
    float phi = 3.14;
    float k = jl / p ;
    float r = k / (2*phi);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", p);
    printf("Jarak tempuh Pak Dengklek = %.f km\n\n", jl);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f km", r); }