#include<stdio.h>
int main(){
    int n;
    printf("Donnez un nombre > ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    return 0;
}
