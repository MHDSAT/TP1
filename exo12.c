#include<stdio.h>
int main(){
    float n,puissance,facto,x;
    float somme=1.0;
    printf("Donnez n et x ");
    scanf("%f %f",&n,&x);
    puissance=1;facto=1;
    for(int i=1;i<=2*n;i++){
        facto *= i;
        puissance *= x;
        if(i%2==0){
            puissance *= -1;
            somme += puissance/facto;
        }     
    }
    printf("%f\n",somme);
    return 0;
}
/*
n   x   S
4   2
3   0
*/