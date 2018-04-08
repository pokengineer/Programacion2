#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include "info.h"

typedef struct s_nodo_arbol
{
struct s_nodo_arbol *der;
struct s_nodo_arbol *izq;
t_dato  dato;
}t_nodo_arbol;

typedef t_nodo_arbol* t_arbol;

#endif // ARBOL_H_INCLUDED
