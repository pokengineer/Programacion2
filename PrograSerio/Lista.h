#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "info.h"
typedef struct s_nodo_lista
{
    struct s_nodo_lista *sig;
    t_dato dato;
}t_nodo_lista;

typedef t_nodo_lista* t_lista;


int cmp(void *, void * );
void Crear_lista(t_lista * pl);
int insertar_en_orden(t_lista *pl, t_dato *d, t_cmp cmp );
int eliminar(t_lista *pl, t_dato *d, t_cmp cmp);
void mostrar_lista(t_lista *pl );
void ordenar_lista( t_lista *pl, t_cmp cmp );
t_lista buscar_menor( t_lista *pl , t_cmp cmp);
void intercambiar_nodos(t_nodo_lista *a, t_nodo_lista *b);
void eliminar_repetidos(t_lista *pl, t_cmp cmp);

#endif // LISTA_H_INCLUDED
