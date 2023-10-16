#include<stdio.h>
#include<math.h> 
int main () {
    float a, b;
    scanf ("%f %f", &a, &b);
    float c = sqrt( b*b - a*a );
    printf("Alas = %.f\n", c);
    printf("Tinggi = %.f\n", a);
    printf("Keliling = %.f\n", a + b + c);
    printf("Luas = %.f cm^2", 0.5 * c * a); }

