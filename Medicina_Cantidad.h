/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medicina_Cantidad.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 08:43 AM
 */

#ifndef MEDICINA_CANTIDAD_H
#define MEDICINA_CANTIDAD_H
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
//#include "Medicina.h"

class Medicina_Cantidad {
private:
    int codigo;
    int cantidad;
public:
    Medicina_Cantidad();
    Medicina_Cantidad(const Medicina_Cantidad& orig);
    virtual ~Medicina_Cantidad();
    void SetCantidad(int cantidad);
    int GetCantidad() const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
    
    void imprimeMedicina(ofstream&);
    
};

void operator>>(ifstream&arch,class Medicina_Cantidad &med);
//void operator>>(ifstream&arch,class Medicina &med);

#endif /* MEDICINA_CANTIDAD_H */


