#include<stdio.h>
int main(){
    int matrice[10][10],n,milieu,b=0,e,elem=1;
    do{
        printf("Taille entre 1 et 10 > ");
        scanf("%d",&n);
    }while(n<=0 || n>10);
    milieu = (int)( (n-1)/2 );e=n-1;
    int copie=2;
    if(n%2==0)
        copie=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=milieu){
                if(j>=b && j<=e)
                    matrice[i][j]=elem;
                else
                    matrice[i][j]=matrice[i-1][j];
            }else
                matrice[i][j]=matrice[i-copie][j];
        }
        elem++;b++;e--;
        if(i>milieu)
            copie+=2;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%2d",matrice[i][j]);
        }printf("\n");
    }
    return 0;
}