#include <iostream>
#include "stack.h"

using namespace std;



int main()
{
Carta aux;
cout<<"Esta es la prueba para la estructura de datos Pila (LIFO) "<<endl<<"en este caso para resolver cuestiones referidas a cartas españolas"<<endl;
Stack* S=NULL;
    cout<<"se inicia la pila (vacia)"<<endl;
    //coutstack(S);
    cout<<"se cargan las cartas 1 de basto , 5 de copa ,9 de espada y 12 de oro"<<endl<<endl;
    push(S,"basto",1);
    push(S,"copa",5);
    push(S,"espada",9);
    push(S,"oro",12);
    coutstack(S);


       // while (isempty(S)==false)
        while (S)
    {

        cout<<"Se retira la ultima de la pila:\t"<<endl;
        aux =pop(S);
      cout<<aux.numero <<" de "<<aux.palo<<endl<<endl;
      cout<<"Se muestran las cartas del mazo"<<endl<<endl;
        coutstack(S);

    }
 return 0;


}
