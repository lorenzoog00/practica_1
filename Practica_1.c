#include<stdio.h>
#include<stdlib.h>

void Intro();
void Menu(int *problema);
void Problemas(int problema);


int main(void){
int problema;
Intro();
 while(1){
Menu(&problema);
Problemas(problema);
 }
return 0;
}
void Intro()
{
  char x; //para que el Read funcione sin problemas y prosiga al presionar enter
  printf("Lorenzo Orozco Presiona ENTER para continuar\n ");
  scanf("%c",&x);
  printf("El objetivo del programa son 2:\n La primera opción es que después de solicitar un valor natural, el programa debe de encontrar más de 2 secuencias numéricas que sumen el número dado.\n La segunda opción pedirá un valor natural, posteriormente se pedirá la base entre el 2 y el 16 en que el usuario desee convertir el valor dado.\n Si se quiere utilizar el primer problema, favor de insertar 1, si se quiere hacer el segundo problema, insertar 2 \n");
  getchar();
  system("clear");
}

void Menu(int *problema)
{
  printf("Qué problema desea utilizar, de querer terminar el programa escribir 3\n" );
  scanf("%d" ,problema);
  system("clear");
}

void Problemas (int problema)
  {
    int lim_inf,lim_sup,flag,acomulado,flag2,n,enter,num,impresion; //n es un contador de limite inferior +1

    if(problema==1 || problema==2 || problema==3)
      {
	if(problema==1)
	  {
	    //printf("Entraste al problema 1\n");
	    lim_inf=1;
	    printf("Qué número quieres?\n");
	    scanf( "%d", &num);
	    if(num>0)
	      {
		while(lim_inf<num/2)
		  {
		    //printf("Entraste al while \n");
		    acomulado=0;
		    flag=0;
		    impresion=lim_inf;
		    n=lim_inf+1;
		    lim_sup=lim_inf+2;
		    flag2=0;
		    //printf("Impresion: %d \n", impresion);
		    do{	
		      if(flag==0)
			
			{
			  acomulado=lim_inf+n+lim_sup;
			  //printf("Acumulado: %d \n", acomulado);
			  flag=1;
			}
		      if(acomulado==num)
			{
			  
			  //printf("Acumulado 2: %d \n", acomulado);
			  while(impresion<=lim_sup)
			    {
			      
			      if (impresion == lim_sup)
				{
				  printf("%d", impresion);
				  impresion++;
				  flag2=1;

				}
			      else
				{
				  printf("%d + ", impresion);
				  impresion++;
				  flag2=1;
				}
			      
                  
			    }
			  printf(" = %d\n", num);
			}
		      //if(flag2==0)
		      
		      //{
		      lim_sup++;
		      acomulado=acomulado+lim_sup;
			  
		      //}
		    }
		    while(acomulado<=num);
		    //printf("papa");
		    lim_inf++;
		  }
	      }
	    else
	      {
		printf("Introdujiste un valor erroneo, favor de presionar ENTER para volver al menú\n");
		getchar();
		//Menu(&enter);
	      }
	  }
	if(problema==2)
	  {
	    int num,num2,i, divi, resi,base;
	    //num2 para que num no se vea afectado
		
	    char letra;
	    i=1;
	    printf("Dame un número entero: \n");
	    scanf("%d", &num);
	    printf("Qué base deseas convertirlo?\n");
	    scanf("%d",&base);
	    if(num>0 && base>=2 && base<=16)
	      {         
		num2=num;
		while(num>0)
		  {
		    num=num/base;
		    i++;
		  }
		while(i>0)
		  {
		    i--;
		    divi=num2/base;
		    resi=divi%base;
		    if(resi>9)
		      {
			letra=resi+55;
			printf("%c", letra);
		      }                                  
		    else
		      {
			printf("%d", resi);
		      }  
		    
		  }
		
	      }
	    else
	      {
		printf("Introdujiste un valor erroneo, favor de presionar ENTER para volver al menú");
		getchar();
	      }
	  }
	if(problema==3){
	  exit(0);
	}
      
    


      }//end of problema
  }
