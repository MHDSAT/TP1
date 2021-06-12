#include<stdio.h>
int main(){
    int note;
    printf("Donnez une note ");
    scanf("%d",&note);
    switch(note){
        case 0 ... 9:
            printf("Non admis\n");
            break;
        case 10 ... 11:
            printf("Passable\n");
            break;
        case 12 ... 13:
            printf("Assez bien\n");
            break;
        case 14 ... 16:
            printf("Bien\n");
            break;
        case 17:
            printf("Très bien\n");
            break;
        case 18 ... 19:
            printf("Excellent\n");
            break;
        case 20:
            printf("Parfait\n");
            break;
        default:
            printf("La note est incorrecte\n");
            break;
    }
    return 0;
}
