#include<stdio.h>
int main(){
    float moy;
    printf("Entrez une moyenne ");
    scanf("%f",&moy);
    if (!(moy>=0 && moy<=20))
        printf("moyenne invalide\n");
    else
        if(moy==20)
            printf("Parfait");
        else
            if(moy>=18)
                printf("Excellent\n");
            else
                if(moy>=17)
                    printf("Très bien\n");
                else
                    if(moy>=14)
                        printf("Bien\n");
                    else
                        if(moy>=12)
                            printf("Assez bien\n");
                        else
                            if(moy>=10)
                                printf("Passable\n");
                            else
                                printf("Non admis\n");
    return 0;
}

