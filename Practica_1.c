#include<stdio.h>
void Intro();
void Menu(int *problema);


int main(void){
int problema;
Intro();
Menu(&problema);
Problemas(problema);
return 0;
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
                  }else{
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
		scanf("%d", &enter);
        //Menu(&enter);
	      } 
	  }
      }


  }//end of problema
