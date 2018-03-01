#include "stack.h"
#include<iostream>
using namespace std;




void push(Stack&p,std::string palo,int num)
{
    Stack aux=new Stack();
    aux->c.numero= num;
     aux->c.palo= palo;
    aux->next=p;
    p=aux;

}

Carta pop(Stack&s)
{
    Stack aux=s;
    Carta c=aux->c;
    s=aux->next;
    delete aux;
    return c;
}


void coutstack(Stack &s)
{
    Stack aux=s;
    while(aux)
    {
    cout<<"Carta: "<<aux->c.numero <<"   de "<<aux->c.palo<<endl;
        aux = aux->next;
    }
    cout<<endl;
}


bool isempty(Stack &s)
{
    if(&s==nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}


