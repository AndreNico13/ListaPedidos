
/* 
 * File:   Pedido.cpp
 * Author: cueva.r
 * 
 * Created on 18 de octubre de 2023, 10:40 AM
 */
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Pedido.h"

Pedido::Pedido() {
    codigo=0;
    cantidad=0;
    dni=0;
    fecha=0;
    total=0;

    
}

Pedido::Pedido(const Pedido& orig) {
}

Pedido::~Pedido() {
}


void Pedido::SetTotal(double total) {
    this->total = total;
}

double Pedido::GetTotal() const {
    return total;
}

void Pedido::SetFecha(int fecha) {
    this->fecha = fecha;
}

int Pedido::GetFecha() const {
    return fecha;
}

void Pedido::SetDni(int dni) {
    this->dni = dni;
}

int Pedido::GetDni() const {
    return dni;
}

void Pedido::SetCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int Pedido::GetCantidad() const {
    return cantidad;
}

void Pedido::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int Pedido::GetCodigo() const {
    return codigo;
}

int Pedido::descuento(){
    
    if(codigo>=400000 && codigo<500000) return 1;
    return 0;
}

void Pedido::SetNombre(const char* cad) {
    if(nombre!=nullptr) delete nombre;
    nombre = new char[strlen(cad)+1];
    strcpy(nombre,cad);
}
void Pedido::GetNombre(char*cad) const {
    strcpy(cad,nombre);
}
/*
118050,10,PAPAYA,8,8,79475585,16/12/2019
118050,10,PAPAYA,5,5,79475585,30/04/2020
118050,10,PAPAYA,11,11,81114108,09/03/2020
126218,10,TANJERINA,11,5.5,33713901,26/01/2020
 */ 
void Pedido::lee(int cod,ifstream& arch){
    char nombre[100],c;
    int  dni,stock,fecha,dd,mm,aa;
    double total;
    
        arch.get();
        SetCodigo(cod);
        arch.getline(nombre,100,',');
        SetNombre(nombre);
        arch >> stock;
        arch.get();
        SetCantidad(stock);
        arch >> total;
        SetTotal(total);
        arch.get();
        arch >> dni;
        SetDni(dni);
        arch.get();
        arch >> dd >>c>>mm>>c>>aa;
        arch.get();
        fecha=aa*10000+mm*100+dd;
        SetFecha(fecha);
 }


void Pedido::imprime(ofstream &arch,double desc,double fle){
    char cad[100];
    double monto;
    
    arch<<endl<<left <<setw(10)<<GetFecha()<<endl;
    GetNombre(cad);
    arch <<setw(10)<<codigo<<setw(50)<< cad <<endl;
    arch<<"DNI: "<< dni << endl;
    arch <<"Monto Total: "<<right<<setprecision(2)<<fixed;
    monto = GetTotal()+(GetTotal()*fle/100)-(GetTotal()*desc/100);
    arch <<setw(10)<< monto <<endl;
}