#ifndef STACKPOINTER_H_INCLUDED
#define STACKPOINTER_H_INCLUDED
#include <array>
#include <string>
using namespace std;

namespace Stack{
struct Carta {
int numero;
std::string palo;
};
struct Nodo
{
    Carta c;
    Nodo *next;
};
struct Stack{Nodo *cima;};//no le logro dar uso

void push(Nodo* &,Carta&);
Carta pop(Nodo *&);//quizas desp cambiarlos para ver q onda con la nueva estructura
void coutstack(Nodo *& );
//void nullstack(Nodo& );
bool isempty( const Nodo * );//ver si sirve dejar el const
//void InitStack(Nodo *&);
}
#endif // STACKPOINTER_H_INCLUDED
