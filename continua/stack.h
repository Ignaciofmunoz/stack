#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <array>
#include <string>
using namespace std;
namespace Stack{
struct Carta {
int numero;
string palo;
};
struct Stack
{
 std::array<Carta ,100000>a;
    int i=0;
};
Carta  pop (Stack&);
void push (Stack&,Carta&);
bool isempty (Stack&);
void coutstack(Stack&);
}
#endif // STACK_H_INCLUDED
