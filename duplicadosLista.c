#include <stdio.h>
int main(){
 int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,10,2,11};
 int listSize = sizeof(list)/sizeof(list[0]);
 int counterList[listSize];
 int count = 0;
 for(int x=0; x<listSize; x++){
  for(int y=x+1; y<listSize; y++){
    if(list[x]==list[y]){
     count++;  
     printf("numero repetido encontrado : %d\n",list[x]);                  
   }
  }
 } 
 system("pause");
}
