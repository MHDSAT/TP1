#include<stdio.h>
int main(){
    int f,c;
    printf("Donnez la temperature en F ");
    scanf("%f",&f);
    c=0.55556*(f-32);
    printf("La temperature en C est %f\n",c);
    return 0;
}