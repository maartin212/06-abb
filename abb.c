#include "abb.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct abb{
  void* valor;
  struct abb abb_izq;
  struct abb abb_der;
};


// recibe dos cadenas y devuelve:
// Un entero menor que 0 si la primera cadena es menor que la segunda.
// Un entero mayor que 0 si la primera cadena es mayor que la segunda.
// 0 si ambas claves son iguales.
typedef int (*abb_comparar_clave_t) (const char *, const char *);


typedef void (*abb_destruir_dato_t) (void *);

abb_t* abb_crear(abb_comparar_clave_t cmp, abb_destruir_dato_t destruir_dato){

}

bool abb_guardar(abb_t *arbol, const char *clave, void *dato){

}

void *abb_borrar(abb_t *arbol, const char *clave){

}

void *abb_obtener(const abb_t *arbol, const char *clave){

}

bool abb_pertenece(const abb_t *arbol, const char *clave){

}

size_t abb_cantidad(abb_t *arbol){

}

void abb_destruir(abb_t *arbol){

}


void abb_in_order(abb_t *arbol, bool visitar(const char *, void *, void *), void *extra){

}


typedef struct abb_iter{

};

abb_iter_t *abb_iter_in_crear(const abb_t *arbol){

}

bool abb_iter_in_avanzar(abb_iter_t *iter){

}

const char *abb_iter_in_ver_actual(const abb_iter_t *iter){

}

bool abb_iter_in_al_final(const abb_iter_t *iter){

}

void abb_iter_in_destruir(abb_iter_t* iter){

}
