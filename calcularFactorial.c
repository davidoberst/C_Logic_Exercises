#include <stdio.h>
int main(){
 int n;
 printf("Ingresa el numero para calcular su factorial: ");
 scanf("%d",&n);
 double count = 1 ;
 for(int i=n; i>0; i--){
  count = count * i;  
 }   
 printf("%d = !%lf \n",n,count);  
 
 system("pause");
}
 
