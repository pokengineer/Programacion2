#ifndef COLACIRCULAR_H_INCLUDED
#define COLACIRCULAR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "info.h"

typedef struct s_nodo_cola
{
struct s_nodo_cola *sig;
t_dato  dato;
}t_nodo_cola;

typedef t_nodo_cola* t_cola;


void Crear_Cola(t_cola * pc);
int cola_Vacia(t_cola *pc);
int cola_Llena(t_cola *pc);
int acolar(t_cola *pc, t_dato *d);
int desacolar(t_cola *pc, t_dato *d);
int ver_primero(t_cola *pc, t_dato *d);

#endif // COLACIRCULAR_H_INCLUDED
