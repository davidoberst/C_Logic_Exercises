//VERIFICAR SI UN NUMERO ES PAR O IMPAR

#include <stdio.h>
int main(){
 while(1){   
  int number;
  printf("\n Ingresa el numero,ingresa 0 para salir : ");
  scanf("%d",&number);
  if(number == 0){
   printf("saliendo del programa...");
   break;
  }
  if(number % 2 == 0){
    printf("El numero %d es par \n",number);
  }else{
   printf("El numero %d es impar \n",number);     
  }
}
return 0;
}
