#include "ListaSanta.h"

ListaSanta::ListaSanta()
{}

ListaSanta::~ListaSanta()
{}

void ListaSanta::agregarLista(unsigned llave,unsigned acciones){
    ListaAcciones[llave] = acciones;
}

void ListaSanta::diferenciaLista(unsigned llave,unsigned acciones){
    ListaAcciones[llave] = ListaAcciones[llave] - acciones;
}

void ListaSanta::compararLista(unsigned llave,unsigned limite){
    if( ListaAcciones[llave] >= limite){
        std::cout<< 1 << " ";
        return;
    }

    std::cout << 0 << " ";
}
