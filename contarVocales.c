#include <stdio.h>
int VocalsCounter(char word[]){
 char vocales[] = {'a', 'e', 'i', 'o', 'u'};
 int arrSize = sizeof(vocales) / sizeof(vocales[0]);
 int counter = 0;
 for(int x=0;word[x] !='\0'; x++){
  for(int y=0; y<arrSize; y++){
    if(word[x]==vocales[y]){
     counter++;                   
    }//end if              
  }//end for2        
 } //end for1
 return counter;
}//end function

int main(){  
 char word[100];
 printf("Palabra : ");
 scanf("%s",word);     
 int functionCall = VocalsCounter(word);
 printf("El total de vocales en la palabra %s es %d \n",word,functionCall);
 system("pause");  
 return 0;
}//end main

