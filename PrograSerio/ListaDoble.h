#ifndef LISTADOBLE_H_INCLUDED
#define LISTADOBLE_H_INCLUDED
#include "info.h"

typedef struct s_nodo_listaD
{
    struct s_nodo_listaD * sig;
    struct s_nodo_listaD * ant;
    t_dato dato;
}t_nodo_listaD;

typedef t_nodo_listaD* t_listaD;


void Crear_ListaD( t_listaD *pl );
int enlistarAsiNomas( t_listaD *pl, t_dato *d );
void mostrar_ListaD(t_listaD *pl);
t_listaD * buscar_MenorD( t_listaD *pl, t_cmp cmp);
void ordenar_listaD( t_listaD *pl, t_cmp cmp);
void intercambiar_nodosBien(t_listaD *a, t_listaD *b);
void eliminar_repetidosD( t_listaD *, t_cmp cmp);


#endif // LISTADOBLE_H_INCLUDED
