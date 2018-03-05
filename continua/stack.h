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
 std::array<Carta ,100000>a;
    int i=0;
};
typedef Nodo Stack;//solo compila si lo agrego

Carta  pop (Stack&);
void push (Stack&,Carta);
bool isempty (Stack&);
void coutstack(Stack&);
void InitStack(Stack&);
}
#endif // STACKCONT_H_INCLUDED

