#include "ColaCircular.h"
///////////////////////////
void Crear_Cola(t_cola * pc)
{
    *pc=NULL;
}
//////////////////////////
int cola_Vacia(t_cola *pc)
{
    return !(*pc);
}
//////////////////////////
int cola_Llena(t_cola *pc)
{
    t_dato * aux = (t_dato*)malloc(sizeof(t_dato));
    if(!aux)
        return 1;
    free(aux);
    return 0;
}
/////////////////////////
int acolar(t_cola *pc, t_dato *d)
{
    t_nodo_cola *aux = (t_nodo_cola*)malloc(sizeof(t_nodo_cola));
    if (!aux )
        return 0;
    aux->dato=*d;
    if(!(*pc) )
    {
        *pc=aux;
        aux->sig=aux;
    }
    else
    {
        aux->sig=(*pc)->sig;
        (*pc)->sig=aux;
        (*pc)=aux;
    }
    return 1;

}
/////////////////////////
int desacolar(t_cola *pc, t_dato *d)
{
    t_nodo_cola *aux;
    if(!(*pc))
        return 0;
    aux=(*pc)->sig;
    *d=aux->dato;
    (*pc)->sig =  aux->sig;
    if ( aux == aux->sig)
        *pc=NULL;
    free(aux);
    return 1;
}
////////////////////////
int ver_primero(t_cola *pc, t_dato *d)
{
    if( !(*pc) )
        return 0;
    *d = (*pc)->sig->dato;
    return 1;
}
//////////////////////////
