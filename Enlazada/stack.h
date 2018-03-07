#ifndef STACKPOINTER_H_INCLUDED
#define STACKPOINTER_H_INCLUDED
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
Carta pop(Nodo *&);
void coutstack(Nodo *& );
bool isempty( const Nodo * );
//void InitStack(Nodo *&);
}
#endif // STACKPOINTER_H_INCLUDED
