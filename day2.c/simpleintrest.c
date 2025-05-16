#include <stdio.h>

int main(){
    float p,r,t,SI;
    printf("Enter principal & rate &time: \n");
    scanf("%f %f %f",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("\n SIMPLE INTEST = %f",SI);
    return 0;
}