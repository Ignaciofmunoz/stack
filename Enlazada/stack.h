#ifndef STACKPOINTER_H_INCLUDED
#define STACKPOINTER_H_INCLUDED
#include <array>
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
struct Stack{Nodo *cima;};

void push(Nodo&,Carta&);
Carta pop(Nodo&);//cambie todo los stack por nodo
void coutstack(Nodo& );
void nullstack(Nodo& );
bool isempty(const Nodo& );
void InitStacks(const Nodo&);
}
#endif // STACKPOINTER_H_INCLUDED
