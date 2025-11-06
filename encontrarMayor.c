//encontrar el numero mayor de una lista
#include <stdio.h>
int main(){
 int list[]={1,2,3,4,20,5,9,13};    
 int size = sizeof(list) / sizeof(list[0]);
 for(int x=0; x<size ;x++){
  printf("%d\n",list[x]);
 }
 system("pause");
}
