#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,Distance;


printf("entre la valeur M : x1 y2");
scanf("%f,%f",&x1,&y2);
printf("entre la valeur N : x2 y2");
scanf("%f,%f",&x2,y2);
Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

 printf("Distance (MN):%.2f\n",Distance);
    return 0;
}
