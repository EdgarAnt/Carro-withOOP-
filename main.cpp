#include <iostream>
#include "carro.h"
using namespace std;

int main()
{
    carro carroA;//memoria estatica
    carro *carroB=new carro();//memoria dinamica

    carroA.color="Azul";
    cout<<carroA.getColor()<<endl;

    carroA.setVelocidad(4.34);
    cout<<carroA.getVelocidad()<<endl;
    /*lo unico que almacena un apuntador son direcciones de espacios en memoria
    que contienen tipo datos*/

    carroB->color="Verde";
    cout<<carroB->getColor()<<endl;

    carroB->setVelocidad(3.3536);
    cout<<carroB->getVelocidad()<<endl;
}
