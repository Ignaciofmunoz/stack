#ifndef STACKPOINTER_H_INCLUDED
#define STACKPOINTER_H_INCLUDED
#include <array>

using namespace std;


struct Carta {
int numero;
std::string palo;

};
namespace Stack{
struct Stack
{
    Carta c;
    Stack *next;
};


typedef Stack* mazo;
typedef Stack*espadas;
typedef Stack*copas;
typedef Stack*oros;
typedef Stack*bastos;


void push(Stack*&s,std::string palo,int num);
Carta pop(Stack*&s);
void coutstack(Stack*&s);
bool isempty(Stack*&s);
}
#endif // STACKPOINTER_H_INCLUDED
