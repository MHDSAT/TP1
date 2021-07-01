#include<stdio.h>
int main(){
    float tab1[100],tab2[100];
    int taille,i=0;
    do{
        printf("Taille ? ");
        scanf("%d",&taille);
    }while(taille<0);
    for(int ind=0;ind<taille;ind=ind+2){
        tab2[i]=tab1[ind];
        i++;
    }
    for(int ind=1;ind<taille;ind=ind+2){
        tab2[i]=tab1[ind];
        i++;
    }
    printf("tableau :\n");
    for(i=0;i<taille;i++){
        printf("%f\n",tab2[i]);
    }
    return 0;
}
