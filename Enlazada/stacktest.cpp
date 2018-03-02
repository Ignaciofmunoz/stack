
#include <iostream>
#include <cassert>
#include "stack.h"

using namespace std;



int main()
{
    using namespace Stack;
	using ::Stack::Nodo;
    Nodo S;
    
cout<<"Esta es la prueba para la estructura de datos Pila (LIFO) "<<endl<<"en este caso para resolver problemas con cartas españolas"<<endl;

    cout<<"se inicia la pila (vacia)"<<endl;
    cout<<"se cargan las cartas: 1 de basto , 5 de copa ,9 de espada y 12 de oro"<<endl<<endl;
    push(S,"basto",1);
    push(S,"copa",5);
    assert(pop(S).numero==5);
    push(S,"copa",5);
    push(S,"espada",9);
    push(S,"oro",12);
    coutstack(S);



        while (isempty(s)==false)
    {

        cout<<"Se retira la ultima de la pila:\t"<<endl;
        Carta aux =pop(S);
      cout<<aux.numero <<" de "<<aux.palo<<endl<<endl;
      cout<<"Se muestran las cartas del mazo"<<endl<<endl;
        coutstack(S);
    }
    assert(isempty(s)==true);
 return 0;


}

