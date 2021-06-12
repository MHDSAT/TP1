#include<stdio.h>
#include<string.h>
int main(){
    char chaine[32];
    printf("chaine : ");
    fgets(chaine,32,stdin);
    chaine[strlen(chaine)-1]='\0';
    int len = strlen(chaine),i=0;
    do{
        if (chaine[i]==' ' && (chaine[i-1]==' ' || i==0) ){
            for(int j=i;j<len;j++)
                chaine[j]=chaine[j+1];
            len--;
        }else
            i++;
    }while(i<len);
    if(chaine[len-1]==' ')
        chaine[len-1]='\0';
    printf("<%s>",chaine);
    return 0;
}