//ordenar una lista
#include <stdio.h>
int main(){
 int list[] ={2,10,4,1,3,80};   
 int size = sizeof(list) / sizeof(list[0]);
 for(int x=0;x<size;x++){
  for(int y=1;x<size;y++){
   if(list[x]>list[y]){
    printf("no");        
   }       
  }    
 }
 system("pause");
 return 0;
}
