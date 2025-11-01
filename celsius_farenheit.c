//CONVERTIDOR GRADOS CELSIUS A FARENHEIT

#include<stdio.h>
int main(){   
 int g;
 printf("Ingrese Grados : ");
 scanf("%d",&g);
 int con = (g*9/5+32);
 printf("El resultado es : %d F \n",con);
 system("pause");  
}
