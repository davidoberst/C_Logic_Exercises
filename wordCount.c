#include <stdio.h>
int count(char word[]){ 
 int c = 0;
 for(int i=0; word[i] != '\0'; i++){
  c++;
 }    
 return c;
}    
int main(){    
 char w[100];
 printf("Write your word : ");
 scanf("%s",w);
 int functionCall = count(w);
 printf("El total de letras en %s es : %d \n",w,functionCall);
 system("pause");
    return 0;
}
