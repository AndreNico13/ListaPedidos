
/* 
 * File:   Pedido.h
 * Author: cueva.r
 *
 * Created on 18 de octubre de 2023, 10:40 AM
 */

#ifndef PEDIDO_H
#define PEDIDO_H
#include <fstream>


using namespace std;
class Pedido {
public:
    Pedido();
    Pedido(const Pedido& orig);
    virtual ~Pedido();
    void SetTotal(double total);
    double GetTotal() const;
    void SetFecha(int fecha);
    int GetFecha() const;
    void SetDni(int dni);
    int GetDni() const;
    void SetCantidad(int cantidad);
    int GetCantidad() const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
    int descuento();
    void SetNombre(const char* );
    void GetNombre(char* ) const;
    virtual void lee(int,ifstream &);
    virtual void actualiza()=0;
    virtual void imprime(ofstream &,double ,double );
private:
    int codigo;
    char *nombre;
    int cantidad;
    int dni;
    int fecha;
    double total;
};


#endif /* PEDIDO_H */

