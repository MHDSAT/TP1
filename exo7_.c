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
            printf("Ferm� Revenez � 8h svp !\n");
        else if(heure<12)
            printf("Ouvert !\n");
        else if(jour==4)
            printf("Ferm� Revenez Samedi 8h svp !\n");
        else if(heure<14)
            printf("Ferm� Revenez ce soir � 14h svp !\n");
        else if(heure<17)
            printf("Ouvert !\n");
        else
            printf("Ferm� Revenez demain � 8h svp !\n");
    }else
        printf("Ferm� Revenez demain � 8h svp !\n");
    return 0;
}
