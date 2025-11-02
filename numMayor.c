#include <stdio.h>
//VERIFICAR EL NUMERO MAYOR ENTRE DOS NUMEROS
int main(){
while(1){
  int a;
  int b;
  printf("Ingrese num 1: ");
  scanf("%d",&a);
  printf("Ingrese num 2: ");
  scanf("%d",&b);
  if(a>b){
    printf("el numero %d es mayor que %d \n",a,b);
  }else{
    printf("el numero %d es menor que %d \n",b,a);
  } 
}
 return 0;
}
