#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"

using namespace std;
using namespace Stack;

void CargarCartas();
void Dividirporpalo();
Stack::Stack  mazo,espadas,oros,bastos,copas; //va en la continua

void CargarCartas()
{
    Stack:: Carta c;
   ifstream in("mazo.txt");

   for (c;in>>c.numero>>c.palo;)
    {
      push(mazo,c);
    }

}
void Dividirporpalo()
{
      Stack::Carta aux;

   while(not isempty(mazo))

    {
        aux=pop(mazo);
        if(aux.palo=="basto")
            push(bastos,aux);
        else
            if(aux.palo=="oro")
                push(oros,aux);
            else
                if(aux.palo=="copa")
                    push(copas,aux);
                else
                    if(aux.palo=="espada")
                        push(espadas,aux);
   }
}
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
