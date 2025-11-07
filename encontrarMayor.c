//encontrar el numero mayor de una lista
#include <stdio.h>
int main(){
 int list[]={1,2,3,4,20,5,9,13};    
 int mayor = list[0];
 int size = sizeof(list) / sizeof(list[0]);
 for(int x=0; x<size ;x++){
  if(mayor < list[x]){
   mayor = list[x];
   }
 }
 printf("%d",mayor);  
 system("pause");
}
