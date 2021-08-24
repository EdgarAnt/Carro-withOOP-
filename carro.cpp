#include "carro.h"

void carro::CambiarColor(string cad) //Metodos
{
    color=cad;
}
float carro::getVelocidad(void) //no olvidar poner carro:: sin eso no seria un metodo
{
    return velocidad; //el get es sencillo por que solo regresa por eso el return
}
void carro::setVelocidad(float v)
{
    velocidad=v;
}
string carro::getColor(void)
{
    return color;
}
void carro::setColor(string cad)
{
     color=cad;
}


carro::carro() //constructor
{
    color="blanco";
    velocidad=0;
}

carro::~carro()
{
    //dtor
}
