/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PedidoUsual.cpp
 * Author: cueva.r
 * 
 * Created on 31 de octubre de 2023, 12:44 PM
 */

#include "PedidoUsual.h"

PedidoUsual::PedidoUsual() {
    descuento =0;
    flete = 0;
}

PedidoUsual::PedidoUsual(const PedidoUsual& orig) {
}

PedidoUsual::~PedidoUsual() {
}

void PedidoUsual::lee(int cod, ifstream&arch){
    
    arch.get();
    arch >> descuento;
    arch.get();
    arch >> flete;
    Pedido::lee(cod,arch);
    
}

void PedidoUsual::actualiza(){
    flete = 0;    
}

void PedidoUsual::imprime(ofstream&arch,double a,double b){
    Pedido::imprime(arch,descuento,flete);
    arch << "Descuento: " << descuento<< endl;;
    arch << "Flete : " << flete << endl;;
    
}