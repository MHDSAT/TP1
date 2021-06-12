#include<stdio.h>
int main(){
    int heure,jour;
    do{
        printf("Donnez le jour > ");
        scanf("%d",&jour);
    }while(!(jour>0 && jour<8));
    do{
        printf("Donnez l'heure > ");
        scanf("%d",&heure);
    }while(!(heure>=0 && heure<25));
    if(jour!=5){
        if(heure<8)
            printf("Fermé Revenez à 8h svp !\n");
        else if(heure<12)
            printf("Ouvert !\n");
        else if(jour==4)
            printf("Fermé Revenez Samedi 8h svp !\n");
        else if(heure<14)
            printf("Fermé Revenez ce soir à 14h svp !\n");
        else if(heure<17)
            printf("Ouvert !\n");
        else
            printf("Fermé Revenez demain à 8h svp !\n");
    }else
        printf("Fermé Revenez demain à 8h svp !\n");
    return 0;
}
