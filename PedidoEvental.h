/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PedidoEvental.h
 * Author: cueva.r
 *
 * Created on 31 de octubre de 2023, 12:45 PM
 */

#ifndef PEDIDOEVENTAL_H
#define PEDIDOEVENTAL_H

#include "Pedido.h"


class PedidoEvental: public Pedido {
public:
    PedidoEvental();
    PedidoEvental(const PedidoEvental& orig);
    virtual ~PedidoEvental();
    void lee(int,ifstream &);
    void actualiza();
    void imprime(ofstream& arch,double a,double b);
    
private:
    double flete;
};

#endif /* PEDIDOEVENTAL_H */

