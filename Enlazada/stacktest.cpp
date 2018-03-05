#include <iostream>
#include <fstream>
#include "stack.h"

using namespace std;
using namespace Stack;
using::Stack::Nodo;
using::Stack::Carta;

void CargarCartas();
void Dividirporpalo();

void CargarCartas()
{
    Carta c;
    ifstream in("mazo.txt");
    for (c;in>>c.numero>>c.palo;)
    {push(mazo,aux);}
}
void Dividirporpalo()
{
    Carta Aux;
    string palo;
    int num;
    while(mazo)
    {
        Aux=pop(mazo);
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
    Stack mazo,espadas,oros,bastos,copas;
    InitStack(mazo);
    InitStack(oros);
    InitStack(espadas);
    InitStack(bastos);
    InitStack(copas);
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
