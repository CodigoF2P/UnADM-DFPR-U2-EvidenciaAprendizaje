//Directivas al procesador
#include <stdio.h>//Funciones de entrada y salida
#include <stdlib.h>//Funciones del sistema

//Función Principal
int main(int argc, char *argv[]) 
{
	//Declaracion de variable para el menu de los prgramas
    int opMenu;
    
    //Imprimir los datos del desarrollador
    printf("Eduardo Dami%cn Ram%crez Paniagua\n", 160,161);
	printf("ES231103942\n");

	//Imprimin el menu
	printf("Selecciona una opci%cn del men%c:\n", 162, 163);
	printf("1 Contrataci%cn de personal.\n", 162);
	printf("2 Servicios M%cdicos.\n", 130);
	printf("3 Salir del programa.\n");
	scanf("%d", &opMenu);//Capturar (asignar) el menu
    printf("\n");
    
    //Seleccionar la opcion del menu
	switch(opMenu)
	{
		case 1://Contratación de personal
            fnContratacionPersonal();//Llamar función contratación de personal
	
			break;
		case 2://Servicios Médicos
            fnServiciosMedicos();//Llamar función servicios Médicos
                
            break;
		case 3://Salir
            printf("Hasta luego.\n");
            
            break;
        default: printf("No existen la opci%cn.\n", 162);
	}
	
	system("pause");//Pausa antes de salir del programa
	return 0;
}

//Función contratación de personal
void fnContratacionPersonal()
{
    //Declaracion de variables
    float sueldoMes;
	int areaContr, edadContr, expMeses;

    //Imprimir el menu de las areas
	printf("Seleccione su %crea de inter%cs:\n", 160, 130);
	printf("1 Administraci%cn.\n", 162);
	printf("2 Producci%cn.\n", 162);
	printf("3 Ventas.\n");
	scanf("%d", &areaContr);//Capturar (asignar) el area

	if (areaContr >= 1 && areaContr <= 3)//Validar que la area sea correcta
	{
		printf("Proporciones su edad.\t");
		scanf("%d", &edadContr);//Capturar (asignar) la edad

        if (edadContr >= 30 && edadContr <= 50)//Validar que la edad sea correcta
		{
			printf("Proporcione el tiempo de experiencia en meses.\t");
			scanf("%d", &expMeses);//Capturar (asignar) la experiencia

			if (expMeses >= 6)//Validar que la experencia sea correcta
			{
				printf("Proporcione expectativas econ%cmicas mensual.\t", 162);
				scanf("%f", &sueldoMes);//Capturar (asignar) el sueldo

				switch(areaContr)//Validar los sueldos de acuerdo a la area seleccionada
				{
					case 1://Administración
                        if (sueldoMes >= 10000 && sueldoMes <= 12000)//Validar que el sueldo sea correcta
							printf("Su solicitud fue aceptada.\n");
						else
						    printf("Salario solicitado no est%c dentro del rango.\n", 160);

						break;
					case 2://Producción
                        if (sueldoMes >= 8000 && sueldoMes <= 10000)//Validar que el sueldo sea correcta
							printf("Su solicitud fue aceptada.\n");
						else
						    printf("Salario solicitado no est%c dentro del rango.\n", 160);

						break;
					case 3://Ventas
                        if (sueldoMes >= 5000 && sueldoMes <= 7000)//Validar que el sueldo sea correcta
							printf("Su solicitud fue aceptada.\n");
						else
						    printf("Salario solicitado no est%c dentro del rango.\n", 160);

                        break;
				}
			}
			else
			    printf("No tiene la experiencia suficiente.\n");
		}
		else
		    printf("No se encuentra en el rango de edad de contrataci%cn.\n", 162);
	}
	else
	    printf("No existen vacantes en otro departamento.\n");
	    
    return;
}

//Función servicios Médicos
void fnServiciosMedicos()
{
    //Declaracion de variables
    int espDesc;
	float montPago;
	
	printf("Por favor introducir monto total a pagar de su cuenta.\t");
	scanf("%f", &montPago);//Capturar (asignar) el total de la cuenta
    
    //Imprimir el menu de las especialidades
    printf("Seleccione la especialidad a la que asiste:\n");
    printf("1 Oncolog%ca.\n", 161);
    printf("2 Neumolog%ca.\n", 161);
    printf("3 Cardiolog%ca.\n", 161);
    printf("4 Anestesiolog%ca.\n", 161);
    printf("5 Otra.\n");
    scanf("%d", &espDesc);//Capturar (asignar) la especialidad
    
    if (espDesc >= 1 && espDesc <= 4)//Validar que el sueldo sea correcta
    {
		printf("\nEl monto total es: %.2f\n", montPago); //Imprimir el total de la cuenta
		
		switch(espDesc)//Validar los totales y descuento, de acuerdo a la especialidad seleccionada
		{
			case 1://Oncología
	            printf("El descuento es: %.2f\n", (montPago/100) * 5); //Imprimir descuento
	            printf("El nuevo total con el descuento es:  %.2f\n", montPago - ((montPago/100) * 5)); //Imprimir el total a pagar

				break;
			case 2://Neumología
	            printf("El descuento es: %.2f\n", (montPago/100) * 8); //Imprimir descuento
	            printf("El nuevo total con el descuento es:  %.2f\n", montPago - ((montPago/100) * 8)); //Imprimir el total a pagar

	            break;
			case 3://Cardiología
	            printf("El descuento es: %.2f\n", (montPago/100) * 6); //Imprimir descuento
	            printf("El nuevo total con el descuento es:  %.2f\n", montPago - ((montPago/100) * 6)); //Imprimir el total a pagar

	            break;
			case 4://Anestesiología
	            printf("El descuento es: %.2f\n", (montPago/100) * 9); //Imprimir descuento
	            printf("El nuevo total con el descuento es:  %.2f\n", montPago - ((montPago/100) * 9)); //Imprimir el total a pagar

	            break;
	        default: printf("No existen la opci%cn.\n", 162);
		}
	}
	else if (espDesc == 5)
	    printf("La especialidad a la que se acudi%c no aplica descuento.\n", 162);
    else
        printf("La opci%cn no es v%clida.\n", 162, 160);
					
    return;
}
