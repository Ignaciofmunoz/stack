#include "stack.h"
#include<iostream>
using namespace std;
namespace Stack {
void push( Nodo*&p,Carta&c)//pruebo metiendo los asteriscos haber que onda
{
    Nodo *aux=new Nodo;
    aux->c.numero= c.numero;
     aux->c.palo= c.palo;
    aux->next=p;
    p=aux;
}
Carta pop(Nodo*&s)
{
    Nodo *aux=s;
    Carta c=aux->c;
    s=aux->next;
    delete aux;
    return c;
}


void coutstack(Nodo*& s)
{
    Nodo *aux=s;
    while(aux)
    {
    cout<<"Carta: "<<aux->c.numero <<"   de "<<aux->c.palo<<endl;
        aux = aux->next;
    }
    cout<<endl;
}


bool isempty(const Nodo *s)
{
    if(s==NULL)
        return true;
    else
        return false;
}
void InitStack(const Nodo*&s)
{
    s=NULL;
}
}

