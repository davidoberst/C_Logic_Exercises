//ordenar una lista
#include <stdio.h>
int main(){
 int temp;
 int list[] ={2,10,4,1,3,80};   
 int size = sizeof(list) / sizeof(list[0]);
 for(int x=0;x<size;x++){
  for(int y=x+1;y<size-1;y++){
   if(list[x]<list[y]){
    temp = list[x];    
    list[x] = list[y];   
    list[y]= temp;
   }       
  }    
 }
 for(int z=0;z<size;z++){
  printf("%d",list[z]);   
 }
 system("pause");
 return 0;
}
