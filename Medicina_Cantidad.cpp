/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medicina_Cantidad.cpp
 * Author: Alexis
 * 
 * Created on 8 de noviembre de 2023, 08:43 AM
 */

#include "Medicina_Cantidad.h"
#include "Medicina.h"

Medicina_Cantidad::Medicina_Cantidad() {
}

Medicina_Cantidad::Medicina_Cantidad(const Medicina_Cantidad& orig) {
}

Medicina_Cantidad::~Medicina_Cantidad() {
}

void Medicina_Cantidad::SetCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int Medicina_Cantidad::GetCantidad() const {
    return cantidad;
}

void Medicina_Cantidad::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int Medicina_Cantidad::GetCodigo() const {
    return codigo;
}

void Medicina_Cantidad::imprimeMedicina(ofstream&arch){
    arch<<right<<setw(10)<<codigo<<setw(10)<<cantidad<<endl;
}



void operator>>(ifstream&arch,class Medicina_Cantidad &med){
    int codigo, cantidad;
    arch>>codigo;
    if(arch.eof()) return;
    arch.get(); arch>>cantidad;
    
    med.SetCantidad(cantidad);
    med.SetCodigo(codigo);
}
