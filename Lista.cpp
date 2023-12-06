/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.cpp
 * Author: cueva.r
 * 
 * Created on 31 de octubre de 2023, 11:59 AM
 */

#include "Lista.h"
#include "PedidoEspecial.h"
#include "PedidoUsual.h"
#include "PedidoEvental.h"

Lista::Lista() {
    lini = nullptr;
    lfin = nullptr;
}

Lista::Lista(const Lista& orig) {
}

Lista::~Lista() {
}
/*
 118050,10,PAPAYA,8,8,79475585,16/12/2019
118050,10,PAPAYA,5,5,79475585,30/04/2020
118050,10,PAPAYA,11,11,81114108,09/03/2020
 */

void Lista::inserta(ifstream& arch){
   int codigo; 
   Nodo *ptr=lini,*rec=nullptr;
   
   arch >> codigo;
   if(arch.eof()) return;
   Nodo *nuevo;
   nuevo = new Nodo;
   //nuevo->ant = nullptr;
   
   
   if(codigo<400000)
       nuevo->ped = new PedidoEspecial;
   if(codigo>=400000 && codigo<600000)
       nuevo->ped = new PedidoUsual;
   if(codigo>=600000)
       nuevo->ped = new PedidoEvental;
   
    nuevo->ped->lee(codigo,arch);
    
    while(ptr){
        if(ptr->compara(*nuevo)) break;
        rec = ptr;
        ptr=ptr->sig;
    }
    nuevo->sig=ptr;
    if(ptr!=nullptr) ptr->ant = nuevo; 
    if(rec==nullptr){
        if(ptr==nullptr) lfin = nuevo;
        lini=nuevo;
    }
    else{
        rec->sig = nuevo;
        nuevo->ant = rec;
        if(rec == lfin) lfin = nuevo;
    }
    
}

void Lista::modifica(int dni, int fecha){
    Nodo *nuevo,*ptr=lini,*rec=nullptr;
    
    nuevo = new Nodo;
    nuevo->ped = new PedidoEspecial;         
    nuevo->ped->SetDni(dni);
    nuevo->ped->SetFecha(fecha);
    
    while(ptr){
        if(ptr->compara(*nuevo)) break;
        rec = ptr;
        ptr=ptr->sig;
    }
    ptr = rec;
    while(ptr!=nullptr && ptr->ped->GetDni()==dni ){
        ptr->ped->actualiza();       
        ptr = ptr->ant;
    } 
    delete nuevo;
}

void Lista::muestra(ofstream& arch){
    class Nodo *p;

    p=lini;
        
    while(p)
    {   p->ped->imprime(arch,0,0);
        p=p->sig;
    }        

}