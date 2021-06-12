#include<stdio.h>
int main(){
    int l,h,d,indice=0;
    printf("l, h et d > ");
    scanf("%d %d %d",&l,&h,&d);
    for(int i=1;i<=h;i++){
        for(int j=1;j<=l;j++){
            if(d!=0 && indice %d==0)
                printf("* ");
            else
                printf(". ");
            indice++;
        }
        printf("\n");
    }
    return 0;
}
//###########************* Autre Solution ************###############//
/*
#include<stdio.h>
int main(){
    int l,h,d;
    printf("l, h et d > ");
    scanf("%d %d %d",&l,&h,&d);
    for(int i=1;i<=h*l;i++){
        if(i % d==0)
            printf("* ");
        else
            printf(".");
        if(i%l==0)
            printf("\n");
    }
    return 0;
}
*/