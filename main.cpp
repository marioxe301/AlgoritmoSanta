#include "ListaSanta.h"

using namespace std;

int main(){
  unsigned cantidadN,Limite,ID,Cola,acciones;
  ListaSanta ls;

  cin >> cantidadN;
  cin >> Limite;

  //primero agrega los elementos de acciones uenas
  for(unsigned i=0;i< cantidadN;i++){
      cin >> ID >> acciones;
      ls.agregarLista(ID,acciones);
  }

  //luego sus diferencias
  for(unsigned i=0;i<cantidadN;i++){
      cin >> ID >> acciones;
      ls.diferenciaLista(ID,acciones);
  }

  cin >> Cola;
  for(unsigned i=0;i<Cola;i++){
      cin >> ID;
      ls.compararLista(ID,Limite);
  }
  
  ls.~ListaSanta();
}