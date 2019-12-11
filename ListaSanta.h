#ifndef LISTASANTA
#define LISTASANTA
#include <map>
#include <iostream>

class ListaSanta
{
private:
    std::map<unsigned,unsigned>ListaAcciones;
public:
    ListaSanta();
    ~ListaSanta();

    void agregarLista(unsigned llave,unsigned acciones);
    void diferenciaLista(unsigned llave,unsigned acciones);
    void compararLista( unsigned llave,unsigned limite);

};

#endif