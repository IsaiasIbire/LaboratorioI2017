#include "bic.h"

int validaString(char chain[],int acc){
    int i,cantCaracter,nroFlotante=-1,nroNegativo=-1,retorno=1;
    cantCaracter=strlen(chain);
    switch(acc)
    {
        case 1:
            nroFlotante=strcspn(chain,".");
            nroNegativo=strcspn(chain,"-");
            for(i=0;i<cantCaracter;i++)
            {
                if(i==0&&nroNegativo==i)
                    continue;
                if(nroNegativo==0&&(i==nroFlotante&&nroFlotante>1))
                    continue;
                if(nroNegativo==-1&&(i==nroFlotante&&nroFlotante>0))
                    continue;
                if(isdigit(chain[i])==0)
                {
                    retorno=0;
                    break;
                }
            }
            break;
        case 2:
            for(i=0;i<cantCaracter;i++)
            {
                if(isalpha(chain[i])==0)
                {
                    retorno=0;
                    break;
                }
            }
    }
    return retorno;
}
int menu(char screenPrint[],int min,int max,char screenPrintError[],int cantError){
    int selection,contCantError=0,resp,validation;
    char selectionChain[128];

    do{
        puts(screenPrint);
        fflush(stdin);
        gets(selectionChain);
        validation=validaString(selectionChain,1);
        if(validation==0)
        {
            contCantError++;
            printf("\t\t\t\tINGRESE NRO. SOLAMENTE\n\n\n");
            system("pause");
            system("cls");
        }
        else
        {
            selection=atoi(selectionChain);
            if(contCantError!=cantError&&(selection<min||selection>max))
            {
                contCantError++;
                system("cls");
                printf("\t\t\t\t%s\n\n\n",screenPrintError);
                system("pause");
                system("cls");
            }
            if(contCantError==cantError)
            {
                do
                {
                    printf("FUERA DE RANGO VARIAS VECES - %cQUERES CONTINUAR?\n",168);
                    printf("\n0 --> CONTINUAR\n"
                            "1 --> SALIR\n");

                    scanf("%d",&resp);

                    if(resp==1)
                    {
                        selection=-1;
                        break;
                    }
                    else
                    {
                        system("cls");
                        contCantError=0;
                    }
                }while(resp!=0&&resp!=1);
            }
        }
    }while(validation==0||resp==0||selection<min||selection>max);
    system("cls");
    return selection;
}
float sumar(float nro_1,float nro_2){
    return nro_1+nro_2;
}
float restar(float nro_1,float nro_2){
    return nro_1-nro_2;
}
float divicion(float nro_1,float nro_2){
    return nro_1/nro_2;
}
float multiplicacion(float nro_1,float nro_2){
    return nro_1*nro_2;
}
int factorial(float nro_1){
    int factorial;
    for(factorial=1;nro_1>1; nro_1--){
        factorial*=nro_1;
    }
    return factorial;
}
void limpiarPantalla(void){
    system("cls");
}
