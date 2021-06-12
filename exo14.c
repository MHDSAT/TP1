#include<stdio.h>
#include<math.h>
int main(){
float pi(int precision){
    float last_a=1,new_a,last_b=1/sqrt(2),new_b,ret,sigma=0,p=2;
    for(int i=1;i<=precision;i++){
        new_a = (last_a + last_b)/2;
        new_b = sqrt(last_a*last_b);
        sigma += p*(new_a*new_a - new_b*new_b);
        last_a = new_a; last_b = new_b;p *= 2;
    }
    return (4 * new_a * new_a)/(1 - 2 * sigma);
}
int main(){
    int n;
    printf("Donnez n ");
    scanf("%d",&n);
    printf("Pi = %f\n",pi(n));
    }
   return 0;
  }
