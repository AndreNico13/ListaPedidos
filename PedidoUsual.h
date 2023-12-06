/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PedidoUsual.h
 * Author: cueva.r
 *
 * Created on 31 de octubre de 2023, 12:44 PM
 */

#ifndef PEDIDOUSUAL_H
#define PEDIDOUSUAL_H

#include "Pedido.h"


class PedidoUsual:public Pedido {
public:
    PedidoUsual();
    PedidoUsual(const PedidoUsual& orig);
    virtual ~PedidoUsual();
    void lee(int,ifstream &);
    void actualiza();
    void imprime(ofstream& arch,double a,double b);
private:
    double descuento;
    double flete;
};

#endif /* PEDIDOUSUAL_H */

