#include <stdio.h>

void imprimefibonacci(int n){
  int i, n1=0, n2=1, n3;

  printf("sequencia de fibonacci ate o %d-esimo termo:\n", n);

  for(i=0; i<n; i++){
    printf("%d", n1);
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3; 
    printf("\n");
  }

}

int main(void){
  int n;
  printf("digite o numero de termos da sequencia de fibonacci:");
  scanf("%d", &n);
  imprimefibonacci(n);


return 0;
}