#include "ColaCircular.h"
#include "PilaCircular.h"
#include "Lista.h"
#include "Arbol.h"
#include "ListaDoble.h"

int cmp(void* a, void* b );
void mostrar(void*a, void*b );

int main()
{
//    t_arbol arbol;
//    t_nodo_arbol *cosa;
//    t_dato aux;
//    crear_arbol( &arbol);
//    aux=5;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=2;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=1;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=7;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=3;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=6;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=4;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=9;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=8;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=10;
//    agregar_nodoA( &arbol, &aux, cmp);
//    aux=0;
//    agregar_nodoA( &arbol, &aux, cmp);
//    recorrerIRD( &arbol, mostrar );
//    puts("");
//    recorrerRID(&arbol, mostrar );
//    puts("");
//    recorrerIDR(&arbol, mostrar );
//    puts("");
//    mostrarArbolDeforestado( &arbol, mostrar );
//    aux=2;
//    eliminar_nodo( &arbol, &aux, cmp);
//    printf("\n%d", altura(&arbol) );
//    puts("");
//    mostrarArbolDeforestado( &arbol, mostrar );
//    cosa = buscarNodoA( &arbol, &aux, cmp );
//    podar(&arbol, 3);
//    puts("");
//    mostrarArbolDeforestado( &arbol, mostrar );
t_listaD lista;
t_dato aux;
Crear_ListaD(&lista );
aux=5;
enlistarAsiNomas( &lista, &aux);
aux=2;
enlistarAsiNomas( &lista, &aux);
aux=5;
enlistarAsiNomas( &lista, &aux);
aux=5;
enlistarAsiNomas( &lista, &aux);
aux=5;
enlistarAsiNomas( &lista, &aux);
aux=5;
enlistarAsiNomas( &lista, &aux);
aux=1;
enlistarAsiNomas( &lista, &aux);
aux=1;
enlistarAsiNomas( &lista, &aux);
aux=1;
enlistarAsiNomas( &lista, &aux);

mostrar_ListaD( &lista );
//ordenar_listaD( &lista, cmp );
//puts("");
//mostrar_ListaD( &lista );
eliminar_repetidosD( &lista, cmp );
puts("");
mostrar_ListaD( &lista );


    return 1;
}
////////////////
int cmp(void* a, void* b )
{
    t_dato aux1 = *(t_dato*)a;
    t_dato aux2 = *(t_dato*)b;
    return aux1 - aux2;
}
////////////////
void mostrar(void*a, void*b )
{
    t_dato aux = *(t_dato*)a;
    printf("%d",aux);
}
