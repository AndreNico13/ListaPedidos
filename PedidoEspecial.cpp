/* 
 * File:   PedidoEspecial.cpp
 * Author: cueva.r
 * 
 * Created on 31 de octubre de 2023, 12:42 PM
 */

#include "PedidoEspecial.h"

PedidoEspecial::PedidoEspecial() {
    descuento = 0;
}

PedidoEspecial::PedidoEspecial(const PedidoEspecial& orig) {
}

PedidoEspecial::~PedidoEspecial() {
}

void PedidoEspecial::lee(int cod, ifstream &arch){
    
    arch.get();
    arch >> descuento;
    Pedido::lee(cod,arch);
}

void PedidoEspecial::imprime(ofstream& arch,double a,double b){
    Pedido::imprime(arch,descuento,0);
    arch << "Descuento: " << descuento << endl;

}