#include "PilaCircular.h"
//////////////////////////
void crear_pila(t_pila * pp)
{
    (*pp)=NULL;
}
//////////////////////////
int pila_llena(const t_pila * pp)
{
    t_nodo_pila * aux = (t_nodo_pila*)malloc(sizeof(t_nodo_pila));
    if(!aux)
        return 0;
    free(aux);
    return 1;
}
//////////////////////////
int pila_vacia(const t_pila * pp)
{
    return !(*pp);
}
//////////////////////////
int apilar(t_pila * pp, const t_dato *d)
{
    t_nodo_pila *nue= (t_nodo_pila*)malloc(sizeof(t_nodo_pila));
    if(!nue)
        return 0;
    nue->dato=*d;
    if( !(*pp))
    {
        (*pp) = nue;
        nue->sig =nue;
    }
    else
    {
        nue->sig=(*pp)->sig;
        (*pp)->sig=nue;
    }
    return 1;
}
//////////////////////////
int sacar_de_pila(t_pila * pp, t_dato * d)
{
    t_nodo_pila *aux;
    aux = (*pp)->sig;
    *d = aux->dato;
    if( aux->sig == aux )
    {
        (*pp)=NULL;
    }
    else
    {
        (*pp)->sig = aux->sig;
    }
    free(aux);
    return 1;
}
//////////////////////////
int tope_de_pila(const t_pila * pp, t_dato * d)
{
    if( !(*pp) )
        return 0;
    *d = (*pp)->dato;
    return 1;
}
//////////////////////////
