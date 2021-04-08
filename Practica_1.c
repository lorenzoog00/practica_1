#include<stdio.h>
void Intro();
void Menu(int *problema);


int main(void){
  int problema;
  Intro();
  Menu(&problema);
 
}
void Intro()
{
  char x; //para que el Read funcione sin problemas y prosiga al presionar enter
  printf("Lorenzo Orozco Presiona ENTER para continuar\n ");
  scanf("%c",&x);
  printf("El objetivo del programa son 2:\n La primera opción es que después de solicitar un valor natural, el programa debe de encontrar más de 2 secuencias numéricas que sumen el número dado.\n La segunda opción pedirá un valor natural, posteriormente se pedirá la base entre el 2 y el 16 en que el usuario desee convertir el valor dado.\n Si se quiere utilizar el primer problema, favor de insertar 1, si se quiere hacer el segundo problema, insertar 2 \n");
  getchar();
}

void Menu(int *problema)
{
  printf("Qué problema desea utilizar, de querer terminar el programa escribir 3\n" );
  scanf("%d" ,problema); 
}

