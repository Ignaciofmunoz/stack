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
struct Stack{Nodo *cima=NULL;};
void push(Stack&,Carta&);
Carta pop(Stack&);void coutstack(Stack&);
bool isempty( const Stack& );
}
#endif // STACKPOINTER_H_INCLUDED
