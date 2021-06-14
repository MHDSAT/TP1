#include<stdio.h>
int main(){
    float n,puissance=1,facto=1,x,somme=1.0;
    int signe=-1;
    printf("Donnez n et x ");
    scanf("%f %f",&n,&x);
    for(int i=1;i<=n;i++){
        facto = facto * 2*i * (2*i-1);
        puissance = puissance * x * x;
        somme += (signe*puissance)/facto;  
        signe *= -1;
    }
    printf("%f\n",somme);
    return 0; 
}
