//invertir una cadena
#include<stdio.h>
int main(){
 char word[] = "holamundo";
 int size = sizeof(word) /sizeof(word[0]);
 printf("%d\n",size);
 for (int i = size - 2; i >= 0; i--) {
  printf("%c \n",word[i]);
 }
 system("pause"); 
}
