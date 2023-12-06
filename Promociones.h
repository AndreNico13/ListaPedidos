/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Promociones.h
 * Author: cueva.r
 *
 * Created on 31 de octubre de 2023, 12:07 PM
 */

#ifndef PROMOCIONES_H
#define PROMOCIONES_H

#include "Lista.h"


class Promociones {
public:
    Promociones();
    Promociones(const Promociones& orig);
    virtual ~Promociones();
    void leepedidos();
    void actualizapedidos();
    void imprimepedidos();
    
private:
    Lista Lpedidos;
};

#endif /* PROMOCIONES_H */

