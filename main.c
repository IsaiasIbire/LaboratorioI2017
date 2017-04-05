#include "bic.h"

#define             MIN             1
#define             MAX             9

int main()
{
    /** select para tomar el returno de función menu */
    int select,cont_1=0;
    float a=0, b=0;
    do
    {
        if(cont_1!=0)
        {
            printf("\t\t\t\t\tA=%.2f\tB=%.2f\n\n\n",a,b);
        }
        /** se muestra menu y obtiene selección */
        select = menu("1-Ingresar 1er operando (A)\n2-Ingresar 2do operando (B)\n"
                      "3-Calcular la suma (A+B)\n4-Calcular la resta (A-B)\n"
                      "5-Calcular la division (A/B)\n6-Calcular la multiplicacion (A*B)\n"
                      "7.Calcular el factorial (A!)\n8-Calcular todas las operaciones\n"
                      "9-Salir\n",MIN,MAX,"FUERA DE RANGO",3);

        switch(select){
            case 1:
                printf("Ingrese A: ");
                scanf("%f",&a);
                cont_1=1;
                limpiarPantalla();
                break;
            case 2:
                printf("Ingrese nro_2: ");
                scanf("%f",&b);
                cont_1=1;
                limpiarPantalla();
                break;
            case 3:
                limpiarPantalla();
                if(cont_1 != 0)
                {
                    printf("Suma: %.2f\n\n",sumar(a,b));
                }
                else
                    printf("Primero debe ingresar un nro.\n\n");
                break;
            case 4:
                limpiarPantalla();
                if(cont_1 != 0)
                {
                    printf("Resta: %.2f\n\n",restar(a,b));
                }
                else
                    printf("Primero debe ingresar un nro.\n\n");
                break;
            case 5:
                limpiarPantalla();
                if(cont_1 != 0)
                {
                    if (b==0)
                    {
                        printf("No se puede dividir por 0\n\n");
                        break;
                    }
                    printf("Divicion: %.2f\n\n",divicion(a,b));
                    break;
                }
                else
                    printf("Primero debe ingresar un nro.\n\n");
            case 6:
                limpiarPantalla();
                if(cont_1 != 0)
                {
                    printf("Multiplicacion: %.2f\n\n",multiplicacion(a,b));
                }
                else
                    printf("Primero debe ingresar un nro.\n\n");
                break;
            case 7:
                limpiarPantalla();
                if(cont_1 != 0)
                {
                    if(a>=0||cont_1==1){
                        printf("Factorial: %d\n\n",factorial(a));
                        break;
                    }
                    if(a<0){
                        printf("El nro. ingresado es negativo - no puede calcularse\n\n");
                        break;
                    }
                }
                else
                    printf("Ingrese un Nro. antes de calcular factorial\n\n");
                break;
            case 8:
                limpiarPantalla();
                if(cont_1 != 0)
                {
                    printf("Suma: %.2f\n",sumar(a,b));
                    printf("Resta: %.2f\n",restar(a,b));
                    printf("Divicion: %.2f\n",divicion(a,b));
                    printf("Multiplicacion: %.2f\n",multiplicacion(a,b));
                    printf("Factorial: %d\n\n",factorial(a));
                }
                else
                    printf("Primero debe ingresar un nro.\n\n");
                break;
        }
        system("pause");
        limpiarPantalla();
    }while(select > 0 && select < 9);

    return 0;
}
