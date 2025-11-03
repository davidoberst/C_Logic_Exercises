//Imprimir las tablas de multiplicar de un numero
#include <stdio.h>
void tablas(){
 int n;
 int arr[] = {1,2,3,4,5,6,7,8,9,10};
 int arrSize = sizeof(arr)/sizeof(arr[0]);
 printf("Ingresa el numero :  ");
 scanf("%d",&n);
 for(int x = 0; x < arrSize;x++){
  int rslt = arr[x] * n;    
  printf("%d x %d = %d \n",n,arr[x],rslt);        
 }//end for1 
}// end void
int main(){
 tablas();
 system("pause");
 return 0;    
}//end main
