#include <stdio.h>
#include <math.h>
int main(){
  float a,b,c,d; scanf("%f%f%f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d<0) printf("Sem raizes\n");
  else if(d==0) printf("x=%.2f\n",-b/(2*a));
  else printf("x1=%.2f x2=%.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
}
