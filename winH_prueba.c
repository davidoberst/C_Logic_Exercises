#include<windows.h>
int main(){
 int res = MessageBox(NULL, "Choose","Hello",MB_YESNO);  
 if(res == IDYES){
  MessageBox(NULL,"You Choose Yes",":)",MB_OK);
  Sleep(3000);
  MessageBox(NULL,"GOODBYE!","!!!",MB_OK);
 }else{
  MessageBox(NULL,"You Choose No",":(",MB_OK);
 }
 return 0;
}
