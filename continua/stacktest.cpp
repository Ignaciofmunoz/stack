
#include <iostream>
#include <cassert>
#include "stack.h"

using namespace std;

void InitCartas(Stack::Carta&b,Stack::Carta&c,Stack::Carta&e,Stack::Carta&o)
{
    b.numero=1;
    b.palo="palo";
    c.numero=5;
    c.palo="copa";
     e.numero=9;
   e.palo="espada";
     o.numero=12;
   o.palo="oro";
}

int main()
{
    using namespace Stack;
	using ::Stack::Nodo;
Stack S;
Carta b,c,e,o;
InitCartas(b,c,e,o);
cout<<"Esta es la prueba para la estructura de datos Pila (LIFO) "<<endl<<"en este caso para resolver problemas con cartas españolas"<<endl;
    cout<<"se inicia la pila (vacia)"<<endl;
    cout<<"se cargan las cartas: 1 de basto , 5 de copa ,9 de espada y 12 de oro"<<endl<<endl;
    push(S,b);
    push(S,c);
    assert(pop(S).numero==5);
    push(S,c);
    assert(pop(S).palo=="copa");
    push(S,c);
    push(S,e);
    push(S,o);
    assert(pop(S).numero==12);
    push(S,o);
    assert(pop(S).palo=="oro");
    push(S,o);
    coutstack(S);
        while (not isempty(S))
    {
        cout<<"Se retira la ultima de la pila:\t"<<endl;
        Carta aux =pop(S);
      cout<<aux.numero <<" de "<<aux.palo<<endl<<endl;
      cout<<"Se muestran las cartas del mazo"<<endl<<endl;
        coutstack(S);
    }
    assert(isempty(S));
 return 0;
}

