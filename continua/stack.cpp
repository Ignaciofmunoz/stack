#include "stack.h"
#include<iostream>
using namespace std;
namespace Stack{

void push (Stack&s,Carta&c)
{

     s.a.at(s.i).palo=c.palo;
         s.a.at(s.i).numero=c.numero;
        s.i++;

}
Carta  pop (Stack&s)
{
    s.i--;
    return s.a.at(s.i);
    ;
}

void coutstack(Stack&s)
{
    for (int i=0; i<(s.i); i++)
    {
        cout<<"Carta: "<<s.a.at(i).numero <<"   de "<<s.a.at(i).palo<<endl;
    }
    cout<<endl;
}

bool isempty (Stack&s)
{
    if(s.i==0)
        return true;
    else
        return false;
}

}
