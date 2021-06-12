#include<stdio.h>
int main(){
    float tab1[100],tab2[100];
    int taille1,taille2=0,end;
    printf("Taille ? ");
    scanf("%d",&taille1);
    end=taille1;
    for(int i=0;i<taille1;i++){
        printf("Element %d ",i);
        scanf("%f",&tab1[i]);
    }
    for(int i=0;i<taille1;i++){
        if((int)tab1[i]%2==0)
            tab2[taille2++]=tab1[i];
        else
            tab1[end++]=tab1[i];
        i--;
    }
    for(int i=0;i<end-taille1;i++){
        tab1[i]=tab1[i+taille1];
    }
    taille1=end-taille1;
    printf("t1\n");
    for(int i=0;i<taille1;i++){
        printf("%f\n",tab1[i]);
    }
    printf("t2\n");
    for(int i=0;i<taille2;i++){
        printf("%.2f\n",tab2[i]);
    }
    return 0;
}