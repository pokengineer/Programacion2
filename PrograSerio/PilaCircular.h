#ifndef PILACIRCULAR_H_INCLUDED
#define PILACIRCULAR_H_INCLUDED
#include "info.h"

typedef struct s_nodo_pila
{
    struct s_nodo_pila * sig;
    t_dato dato;
}t_nodo_pila;

typedef t_nodo_pila* t_pila;

void crear_pila(t_pila * pp);
int pila_llena(const t_pila * pp);
int pila_vacia(const t_pila * pp);
int apilar(t_pila * ppila, const t_dato *d);

#endif // PILACIRCULAR_H_INCLUDED
