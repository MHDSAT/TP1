/*Anagramme
    t1 = 'un veto corse la finira'
    t2 = 'revolution francaise' 
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char chaine1[50],chaine2[50];
    printf("Chaine 1 > ");
    fgets(chaine1,50,stdin);
    printf("Chaine 2 > ");
    fgets(chaine2,50,stdin);
    chaine1[strlen(chaine1)-1]='\0';
    chaine2[strlen(chaine2)-1]='\0';
    int i,len=strlen(chaine1),compt1=0,compt2=0,len2=strlen(chaine2);
    int c1=0,c2=0;
    for(i=0;i<len;i++){
        compt1=0;compt2=0;
        if(chaine1[i]!=' '){
            for(int j=0;j<len;j++)
                if(tolower(chaine1[i])==tolower(chaine1[j]))
                    compt1++;
            for(int j=0;j<len2;j++)
                if(tolower(chaine1[i])==tolower(chaine2[j]))
                    compt2++;
        }     
        if(compt1!=compt2)
            break;
    }
    if(i==len)
        printf("Vrai\n");
    else
        printf("Faux\n");
    return 0;
}