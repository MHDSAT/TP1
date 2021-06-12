#include<stdio.h>
int main(){
    float montant,rembourse;
    char etu,GdEcole='n';
    int interet=9,age;
    printf("Age > ");
    scanf("%d",&age);
    if(age>=18){ //Virifie s'il est agé de plus de 18 ans
        printf("Montant > ");
        scanf("%f",&montant);
        //Demander s'il est etudiant jusqu'à o/n
        do{
            printf("Etudiant o/n > ");
            scanf("%c",&etu);
        }while(etu!='o' && etu!='n');
        //S'il est etudiant, Demander s'il est d'une grande ecole jusqu'à o/n
        if(etu=='o')
            do{
                printf("Grande ecole o/n > ");
                scanf("%c",&GdEcole);
            }while(GdEcole!='o' && GdEcole!='n');
        //s'il est un etudiant de moins de 30 ans ou sil est entre 18 et 25 ans reduction de 2%
        if( (etu=='o' && age<30) || age<=25 )
            interet-=2;
        //S'il est d'une grande ecole, reduction de 1%
        if(GdEcole=='o')
            interet-=1;
        //Somme à rembourser
        rembourse = montant + montant*(interet/100.0);
        printf("Vous devez rembourser %7.2ffcfa",rembourse);
    }else
        printf("Vous ne pouvez pas emprunter\n");
    return 0;
}
