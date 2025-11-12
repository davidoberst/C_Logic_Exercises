#include <windows.h>
int main(){
 int input = MessageBox(NULL,"Crear una carpeta?","????",MB_YESNO);
 if(input == IDYES){
  CreateDirectory("C:\\Users\\USUARIO\\Desktop\\Prueba",NULL);
   MessageBox(NULL,"Carpeta creada correctamente","!!!",MB_OK);  
 }
 return 0; 
}
