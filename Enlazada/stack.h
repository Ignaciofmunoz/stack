
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <array>

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
typedef Nodo *Stack;
void push(Stack&,std::string palo,int num);
Carta pop(Stack& );
void coutstack(Stack& );
void nullstack(Stack& );
bool isempty(Stack& );
}
#endif // STACK_H_INCLUDED*/

