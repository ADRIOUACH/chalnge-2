#include <stdio.h>
#include <stdlib.h>

int main() {
float s,m;
float a,b,c,d;
printf("erntre la valeur de a");
scanf("%f",&a);

printf("erntre la valeur de b");
scanf("%f",&b);

printf("erntre la valeur de c");
scanf("%f",&c);

printf("erntre la valeur de d");
scanf("%f",&d);

s = a+b+c+d;
m = s/4;
printf("la somme = %.2f \n",s);
printf("la moiyenn = %.2f\n",m);
    return 0;
}
