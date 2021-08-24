#ifndef CARRO_H
#define CARRO_H ///precompilado
#include<iostream>
using namespace std;
class carro
{
    public:
        carro(); ///constructor
        ~carro(); ///destructor
        string color; ///atributo

        void CambiarColor(string); //metodos

        float getVelocidad(void);
        void setVelocidad(float);

        string getColor(void); //los get y set siempre tienen que ser publicos
        void setColor(string);


    private:
        float velocidad; ///atributo
        //muchas veces los atributos son privados

};

#endif // CARRO_H
