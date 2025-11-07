//Calcular el promedio de una lista de numeros
//(Suma de todos los números) ÷ (Cantidad de números)
#include <stdio.h>
int main(){
 int list[] = {1,2,4,5,7,8,9,0,88,54};
 float len = (float)sizeof(list) / sizeof(list[0]);
 float rslt;
 float count = 0;
 for(int x = 0;x<len;x++){
  count += list[x];   
 }
  rslt = count / len;
  printf("%.2f\n",rslt);
 system("pause");   
}
