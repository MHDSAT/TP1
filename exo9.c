#include<stdio.h>
int main(){
    int h,l,saut=0;
    printf("taille > ");
    scanf("%d",&h);
    l=2*h-1;
    for(int i=0;i<h;i++){
        for(int j=0;j<saut;j++)
            printf(" ");
        for(int j=0;j<l;j++)
            printf("*");  
        printf("\n");
        saut+=1;l-=2;      
    }
    //saut=h-1;
    //l=1;
    for(int i=0;i<h;i++){
        for(int j=0;j<saut-1;j++)
            printf(" ");
        for(int j=0;j<l+2;j++)
            printf("*");  
        printf("\n");
        saut-=1;l+=2;      
    }
    return 0;
}