/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: cueva.r
 *
 * Created on 31 de octubre de 2023, 11:54 AM
 */

#ifndef NODO_H
#define NODO_H

#include "Pedido.h"


class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    int compara(Nodo &); 
    
    friend class Lista;
    
private:
    Pedido *ped;
    Nodo *sig;
    Nodo *ant;
};

#endif /* NODO_H */

