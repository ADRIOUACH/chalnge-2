#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("entre la valeur de a");
    scanf("%d",&a);
    printf("entre la valeur de b");
    scanf("%d",&b);
    int addition = a +b;
    int soustraction = a - b;
    int multiplication = a * b;
    float division;
    int reste;
    if(b!=0){
       division = a/b;
       reste = a%b;

    } else{

    printf("inpossible\n");
    }
    printf("resultat de a: %d et b: %d \n",a,b);
    printf("addition : a + b = %.2d\n",addition);
    printf("soustraction : a - b = %.2d \n",soustraction);
    printf("multiplication : a * b = %.2d \n",multiplication);
    printf("division : a / b = %.2f\n",division);
    printf(" reste: a %% b = %.2d\n",reste);

    return 0;
}
