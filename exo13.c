#include<stdio.h>
int main(){
    int a,iter=0;
    float last,New,abs,eps;
    do{
        printf("Donnez A et la precision > ");
        scanf("%d %f",&a,&eps);
    }while(a<0);
    last = a/2.0;
    do{
        New = (last + a/last )/2;
        abs=New-last;
        last = New;
        if(abs<0)
            abs*=-1;
        iter++;
    }while(abs>=eps);
    printf("Racine = %f\nIterations = %d\n",last,iter);
    return 0;
}
