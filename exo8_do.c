#include<stdio.h>
int main(){
    int n,i=1;
    printf("Donnez un nombre > ");
    scanf("%d",&n);
    do{
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
        i++;
    }while(i<=n);
    return 0;
}
