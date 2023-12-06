/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: cueva.r
 *
 * Created on 31 de octubre de 2023, 11:59 AM
 */

#ifndef LISTA_H
#define LISTA_H

#include <fstream>
#include "Nodo.h"

using namespace std;

class Lista {
public:
    Lista();
    Lista(const Lista& orig);
    virtual ~Lista();
    void inserta(ifstream &arch);
    void modifica(int, int);
    void muestra(ofstream& arch);
private:
    Nodo *lini;
    Nodo *lfin;
    
};

#endif /* LISTA_H */

