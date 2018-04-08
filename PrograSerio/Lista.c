#include "Lista.h"
//////////////////////////
void Crear_lista(t_lista * pl)
{
    (*pl)=NULL;
}
//////////////////////////
int insertar_en_orden(t_lista *pl, t_dato *d, t_cmp cmp)
{
    t_nodo_lista *aux = (t_nodo_lista*)malloc( sizeof(t_nodo_lista) );
    if( !aux )
        return 0;
    aux->dato = *d;
    while( (*pl) && cmp( &(*pl)->dato, d ) > 0 )
    {
        pl=&(*pl)->sig;
    }
    aux->sig = (*pl);
    *pl = aux;
    return 1;
}
//////////////////////////
int eliminar(t_lista *pl, t_dato *d, t_cmp cmp)
{
    t_nodo_lista *aux;
    while( (*pl) && cmp( &(*pl)->dato, d)!= 0 )
        pl=&(*pl)->sig;
     if( !(*pl) )
        return 0;
     *d = (*pl)->dato;
     aux = *pl;
     (*pl) = aux->sig;
     free(aux);
return 1;
}
///////////////////////////
void mostrar_lista(t_lista *pl )
{
    while ( *pl )
    {
        printf("%d\t", (*pl)->dato );
        pl = &(*pl)->sig;
    }
    puts("");
}
//////////////////////////////
void ordenar_lista( t_lista *pl, t_cmp cmp)
{
    while( *pl )
    {
        intercambiar_nodos( (*pl) , buscar_menor( pl, cmp ));
        pl=&(*pl)->sig;
    }
}
///////////////////////////////
t_lista buscar_menor( t_lista *pl, t_cmp cmp )
{
    t_nodo_lista *min;
    if(!(*pl))
        return 0;
    min = (*pl);
    pl=&(*pl)->sig;
    while( *pl )
    {
        if( cmp( &(*pl)->dato , &(min->dato) ) < 0 )
            min= (*pl);
        pl=&(*pl)->sig;
    }
    return min;
}
////////////////////////////////
void intercambiar_nodos(t_nodo_lista* a, t_nodo_lista* b)
{
///cambiando datos
    t_dato aux;
    if( !a || !b )
        return;
    aux = a->dato;
    a->dato = b->dato;
    b->dato = aux;
}
////////////////////////////////
void eliminar_repetidos(t_lista *pl, t_cmp cmp)
{
    t_nodo_lista *sig;
    if( !(*pl) )
        return;
    sig = (*pl)->sig;
    while( sig )
    {
        while( sig && (cmp( &(*pl)->dato, &sig->dato )==0 ) )
        {
            (*pl)->sig= sig->sig;
            free(sig);
            sig= (*pl)->sig;
        }
        pl=&(*pl)->sig;
        sig=(*pl)->sig;
    }

}
