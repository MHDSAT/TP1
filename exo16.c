#include<stdio.h>
int main(){
    int n,tab[100];
    printf("Taille du tableau ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Element %d ",i);
        scanf("%d",&tab[i]);
    }
    int i=0,c;
    do{
        for(c=2;c<=tab[i]/2;c++)
            if(tab[i]%c==0)
                break;
        if(c==tab[i]/2+1)
            printf("--------\nElement %d=%d premier \n",i,tab[i++]);
        else{
            printf("Element %d=%d non premier. Suppression\n--------\n",i,tab[i]);
            for(int j=i+1;j<n;j++)
                tab[j-1]=tab[j];
            n--;
            printf("Tab =[");
            for(int k=0;k<n;k++)
                printf("%d ",tab[k]);
            printf("\b] n = %d\n",n);
        }
    }while(i<n);
    return 0;
}
