
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <array>

using namespace std;

struct Carta {
int numero;
std::string palo;

};
struct Stack
{
 std::array<Carta ,100000>a;
    int i=0;
};



Carta  pop (Stack&s);
void push (Stack&s,std::string,int );
bool isempty (Stack&s);
void coutstack(Stack&s);


#endif // STACKCONT_H_INCLUDED
