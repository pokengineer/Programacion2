#include "ListaDoble.h"
////////////////////////
void Crear_ListaD( t_listaD *pl )
{
    (*pl)=NULL;
}
///////////////////////
int enlistarAsiNomas( t_listaD *pl, t_dato *d )
{
    t_nodo_listaD *aux= (t_nodo_listaD*)malloc(sizeof(t_nodo_listaD));
    if(!aux)
        return 0;

    aux->dato = *d;
    if( !(*pl) )
    {
        (*pl)= aux;
        aux->ant = aux->sig = NULL;
        return 1;
    }
    aux->sig = (*pl)->sig;
    if( aux->sig)
        aux->sig->ant = aux;
    aux->ant = *pl;
    (*pl)->sig = aux;
    (*pl)= aux;
    return 1;
}
///////////////////////
void mostrar_ListaD(t_listaD *pl)
{
    if(*pl)
    {
        while( (*pl)->ant )
        {
            pl=&(*pl)->ant;
        }
        while ( *pl )
        {
            printf("%d\t", (*pl)->dato );
            pl = &(*pl)->sig;
        }
        puts("");
    }
}
///////////////////////
void ordenar_listaD( t_listaD *pl, t_cmp cmp)
{
    if(*pl)
    {
        while( (*pl)->ant )
        {
            pl=&(*pl)->ant;
        }
        while( *pl )
        {
            intercambiar_nodosBien( pl, buscar_MenorD( pl, cmp ));
            pl=&(*pl)->sig;
        }
    }

}
///////////////////////
t_listaD * buscar_MenorD( t_listaD *pl, t_cmp cmp)
{
    t_listaD *aux = pl;
    while( *pl )
    {
        if( cmp( &(*aux)->dato, &(*pl)->dato) >= 0 )
        {
            aux = pl;
        }
        pl = &(*pl)->sig;
    }
    return aux;
}
////////////////////////
void intercambiar_nodosBien(t_listaD *a, t_listaD *b)
{
    t_nodo_listaD *aux;
    if( a == b )
        return;

    aux= *b;

    if( (*b)->sig )
        (*b)->sig->ant = (*b)->ant;
    (*b)=   aux->sig;

    aux->sig = (*a);
    aux->ant = (*a)->ant;
    (*a)->ant = aux;
    *a = aux;
}
////////////////////////////
void eliminar_repetidosD( t_listaD *pl, t_cmp cmp)
{
    t_nodo_listaD *aux, *elim, *actual = *pl;
    if(!*pl)
        return;
    while( actual && actual->ant )
    {
        actual = actual->ant;
    }
    while( actual )
    {
        aux=actual->sig;
        while( aux )
        {
            if( cmp( &actual->dato, &(aux)->dato )== 0 )
            {
                elim = (aux);
                if((aux)->sig)
                    (aux)->sig->ant = (aux)->ant;
                if((aux)->ant)
                    (aux)->ant->sig = (aux)->sig;
                aux= aux->sig;
                free( elim );
            }
            else
            {
            aux= aux->sig;
            }
        }
        actual=actual->sig;
    }
}
