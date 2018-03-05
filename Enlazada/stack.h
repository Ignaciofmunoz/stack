#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
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
void push(Nodo&,&Carta);
Carta pop(Nodo&);//cambie todo los stack por nodo
void coutstack(Nodo& );
void nullstack(Nodo& );
bool isempty(Nodo& );
void InitStacks(Nodo&)
}
#endif // STACK_H_INCLUDED
