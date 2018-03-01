#include <iostream>
#include <cstdio>

#include "stack.h"

using namespace Stack;
using ::Stack::Stack;
  Stack mazo;
  Stack espadas;
  Stack copas;
  Stack oros;
  Stack bastos;

void CargarCartas();
void Dividirporpalo();

void CargarCartas()
{

    FILE*txt;
    txt=fopen("mazo.txt","r");
    int num;
    char palo [10];
    while (fscanf(txt,"%i\t%s\n", &num, palo )!=EOF)//va leyendo mientras no sea el fin del archivo
    {
        push(mazo,palo,num);


    }
    fclose(txt);
}




void Dividirporpalo()
{


    Carta Aux;
    string palo;
    int num;

    while(mazo)
    {

        Aux=pop(mazo);
        palo =Aux.palo;
        num =Aux.numero;
        if(palo=="basto")
        {
            push(bastos,palo,num);

        }
        else
        {
            if(palo=="oro")
            {
                push(oros,palo,num);
            }
            else
            {
                if(palo=="copa")
                {
                    push(copas,palo,num);
                }
                else
                {
                    if(palo=="espada")
                    {
                        push(espadas,palo,num);
                    }
                }
            }
        }
    }
}
*/
int main()
{

    CargarCartas();
    cout<<"se muestran todo el mazo "<<endl<<endl;
    coutstack(mazo);
    Dividirporpalo();
    cout<<"se muestran los 4 mazos correspondientes a cada palo"<<endl<<endl;
        cout<<"Bastos:"<<endl<<endl;
    coutstack (bastos);
      cout<<"Oros:"<<endl<<endl;
    coutstack (oros);
      cout<<"Copas:"<<endl<<endl;
    coutstack(copas);
      cout<<"Espadas:"<<endl<<endl;
    coutstack (espadas);



    return 0;
}
