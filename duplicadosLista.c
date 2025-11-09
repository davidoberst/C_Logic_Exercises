#include <stdio.h>
int main(){
 int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,10,2};
 int listSize = sizeof(list)/sizeof(list[0]);
 int counterList[listSize];
 int count;
 for(int x=0; x<listSize; x++){
  counterList[x] = list[x];
  if(counterList[x] == list[x]){
   count+1;                 
  }        
 }
 printf("%d",count);
 system("pause");
}
