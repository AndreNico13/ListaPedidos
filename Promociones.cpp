/* 
 * File:   Promociones.cpp
 * Author: cueva.r
 * 
 * Created on 31 de octubre de 2023, 12:07 PM
 */
#include <fstream>
#include <iomanip>
#include <iostream>
#include "Promociones.h"

using namespace std;

Promociones::Promociones() {
}

Promociones::Promociones(const Promociones& orig) {
}

Promociones::~Promociones() {
}

void Promociones::leepedidos(){
    int i=0;
    ifstream arch("pedidos5.csv",ios::in);
    if(!arch){
        cout << "No se puede abrir";
        exit(1);
    }
    while(1){
    //aqui entra en bucle
        Lpedidos.inserta(arch);
        if(arch.eof()) break;
    }
    
}
/*
33713901,06/06/2019
57263719,01/10/2020
 */
void Promociones::actualizapedidos(){
    int dni,dd,mm,aa,fecha;
    char c;
    ifstream arch("promocion.csv",ios::in);
    if(!arch){
        cout << "No se puede abrir promocion";
        exit(1);
    }  
    while(1){
        arch >> dni;
        if(arch.eof()) break;
        arch.get();
        arch >> dd >> c >> mm >> c >> aa;
        fecha = aa*10000+ mm*100+ dd; 
        Lpedidos.modifica(dni,fecha);
    }
    
    
}   
    
void Promociones::imprimepedidos(){
       
    ofstream arch("reporte.txt",ios::out);
    if(!arch)
    {   cout << "Archivo no encontrado" << endl;
        exit(1);
    }
    Lpedidos.muestra(arch);
        
}

