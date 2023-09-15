#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
    float c;
    printf("entre température en f ");
    scanf("%f",&f);
    c =(f-32)/1.8;
    printf("%.2f la dure de f a %.2f la dure c \n",f,c);
    if(c<0){
        printf("ressentie et : tres froid\n");
    }else if (c< 10) {
        printf("ressentie et : froid\n");
    } else if (c < 30) {
        printf("ressentie et : chaud\n");
     } else {
         printf("ressentie et :tres chaud\n");
    }
    return 0;
}
