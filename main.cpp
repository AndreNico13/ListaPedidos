/* 
 * File:   main.cpp
 * Author: cueva.r
 *
 * Created on 31 de octubre de 2023, 11:48 AM
 */

#include "Promociones.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Promociones prom;
    /*EN ESTE PROGRAMA SE HARÁ POLIMORFISMO*/
    prom.leepedidos();
    prom.actualizapedidos();
    prom.imprimepedidos();

    return 0;
}

