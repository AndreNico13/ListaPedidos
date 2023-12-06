/* 
 * File:   PedidoEvental.cpp
 * Author: cueva.r
 * 
 * Created on 31 de octubre de 2023, 12:45 PM
 */

#include "PedidoEvental.h"

PedidoEvental::PedidoEvental() {
    flete = 0;
}

PedidoEvental::PedidoEvental(const PedidoEvental& orig) {
}

PedidoEvental::~PedidoEvental() {
}

void PedidoEvental::lee(int cod, ifstream&arch){
    
    arch.get();
    arch >> flete;
    Pedido::lee(cod,arch);
    
}

void PedidoEvental::actualiza(){
    flete=0;    
}

void PedidoEvental::imprime(ofstream& arch,double a, double b){
    Pedido::imprime(arch,0,flete);
    arch << "Flete : " << flete<< endl;;
    
}

