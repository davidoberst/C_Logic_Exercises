#include <stdio.h>
int VocalsCounter(char word[]){
 char vocales[] = {'a', 'e', 'i', 'o', 'u'};
 printf("Palabra : ");
 scanf("s%",word);    
 int arrSize = sizeof(vocales) / sizeof(vocales[0]);
 for(int x=0;word[x] !='\0'; x++){
  for(int y=0; y<arrSize; y++){
    if(word[x]== y){
     y++;
     printf("El total de vocales en la palabra %s es %d",word,y);                     
    }//end if              
  }//end for2        
 } //end for1
}//end function

int main(){   
 VocalsCounter("hola"); 
 return 0;
}//end main

