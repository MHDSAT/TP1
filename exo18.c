#include<stdio.h>
int main(){
    int vect[32],n,i=0;
    printf("Nombre base 10 > ");
    scanf("%d",&n);
    do{
        vect[i++]=n%2;  
        n /= 2;
    }while(n!=0);
    for(int j=i-1;j>=0;j--)
        printf("%d",vect[j]);
    printf("\n");
    return 0;
}