#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    printf("Donnez n ");
    scanf("%d",&n);
    float last_a=1,new_a,last_b=1/sqrt(2),new_b,sigma=0,p=2,pi;
    for(i=1;i<=n;i++){
        new_a = (last_a + last_b)/2;
        new_b = sqrt(last_a*last_b);
        sigma = sigma + p*(new_a*new_a - new_b*new_b);
        last_a = new_a; last_b = new_b;p = p * 2;
    }
    pi=(4 * new_a * new_a)/(1 - 2 * sigma);
    printf("Pi = %f\n",pi);
   return 0;
  }
