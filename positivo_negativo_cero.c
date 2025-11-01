//VERIFICAR SI UN NUMERO ES NEGATIVO PÓSITIVO O 0 

#include <stdio.h>
int main(){
while(1){    
 int n;
 printf("Ingresa el numero : ");
 scanf("%d",&n);
 if(n > 0){
  printf("El numero %d es positivo \n",n);
 }
 else if(n == 0){
  printf("el numero es 0 \n");
 }
 else{
  printf("el numero %d es negativo \n",n);   
 }      
}
}

