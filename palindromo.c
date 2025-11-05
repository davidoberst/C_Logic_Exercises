//verificar si una palabra es palindromo
#include <stdio.h>
#include <string.h>
int main(){
 char palabra[50];
 char rslt[50];
 printf("Palabra : ");
 scanf("%s",palabra); 
 int size = strlen(palabra);
 for(int x=size-1; x >= 0 ; x-- ){
  
  
  
  if(rslt == palabra ){
   printf("es palindromo \n");
   break;
  }else{
   printf("no es palindromo \n");
   break;
  }
 }
 system("pause");
 return 0;  
}
