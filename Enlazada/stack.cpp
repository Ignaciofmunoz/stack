#include "stack.h"
#include<iostream>
using namespace std;
namespace Stack {
void push(Stack&s,Carta&c)
{
    Nodo* aux=new Nodo();
    aux->c.numero= c.numero;
     aux->c.palo= c.palo;
    aux->next=s.cima;
    s.cima=aux;
}
Carta pop(Stack&s)
{
    Nodo *aux=s.cima;
    Carta c=aux->c;
    s.cima=aux->next;
    delete aux;
    return c;
}


void coutstack(Stack&s)
{
    Nodo *aux=s.cima;
    while(aux)
    {
    cout<<"Carta: "<<aux->c.numero <<"   de "<<aux->c.palo<<endl;
        aux = aux->next;
    }
    cout<<endl;
}


bool isempty(const Stack &S)
{
    if(S.cima==NULL)
        return true;
    else
        return false;
}
}
