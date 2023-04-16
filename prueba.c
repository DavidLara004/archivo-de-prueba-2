#include <stdio.h>

int
main ()
{
    
int cambio, monedas_10=0, monedas_5=0, monedas_2=0, monedas_1=0, total_monedas,
    total_a_cobrar, monto_pagado;

  printf ("Ingrese el total a cobrar por el estacionamiento: ");
  scanf ("%d", &total_a_cobrar);
  printf ("Ingrese el monto que paga el cliente: ");
  scanf ("%d", &monto_pagado);

  if (total_a_cobrar <= monto_pagado) {
      
      cambio = monto_pagado - total_a_cobrar;
      printf ("cambio: %d pesos\n", cambio);

      while (cambio != 0) {
          
	  if (cambio >= 10) {
	      monedas_10++;
	      cambio -= 10;
	    }
	      else if (cambio >= 5) {
	      monedas_5++;
	      cambio -= 5;
	    }
	      else if (cambio >= 2) {
	      monedas_2++;
	      cambio -= 2;
	    }
	      else if (cambio >= 1) {
	      monedas_1++;
	      cambio -= 1;

	    }
	}
      printf ("Monedas de 10: %d\n", monedas_10);

      printf ("Monedas de 5: %d\n", monedas_5);

      printf ("Monedas de 2: %d\n", monedas_2);

      printf ("Monedas de 1: %d\n", monedas_1);


      total_monedas = monedas_10 + monedas_5 + monedas_2 + monedas_1;
      printf ("Total de monedas: %d", total_monedas);
    } else {
      printf ("no cuenta con el saldo suficiente");
      }

}

