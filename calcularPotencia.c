//calcular la potwncia de un numero 
#include <stdio.h>
int main(){
while(1){
 int n;
 int p;
 printf("\n Numero : ");
 scanf("%d",&n);
 printf("\n Potencia : ");
 scanf("%d",&p);
 int counter = 1;
 for(int i=1; i<p+1; i++){
  counter = counter * n;       
 }
 printf("%d",counter);
 system("pause");
 }   
}
