/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PedidoEspecial.h
 * Author: cueva.r
 *
 * Created on 31 de octubre de 2023, 12:42 PM
 */

#ifndef PEDIDOESPECIAL_H
#define PEDIDOESPECIAL_H

#include "Pedido.h"


class PedidoEspecial:public Pedido {
public:
    PedidoEspecial();
    PedidoEspecial(const PedidoEspecial& orig);
    virtual ~PedidoEspecial();
    void lee(int,ifstream &);
    void actualiza(){};
    void imprime(ofstream& arch,double a,double b);
private:
    double descuento;
};

#endif /* PEDIDOESPECIAL_H */

