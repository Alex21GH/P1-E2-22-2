/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Paciente_Medicina.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 08:51 AM
 */

#ifndef PACIENTE_MEDICINA_H
#define PACIENTE_MEDICINA_H
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
#include <list>
#include "Paciente.h"
#include "Medicina_Cantidad.h"
#include <map>
#include "Medicina.h"

class Paciente_Medicina {
private:
    class Paciente paciente;
    list<class Medicina_Cantidad> medicina_cantidad;
    double totalDeGastos;
public:
    Paciente_Medicina();
    Paciente_Medicina(const Paciente_Medicina& orig);
    virtual ~Paciente_Medicina();
    void SetTotalDeGastos(double totalDeGastos);
    double GetTotalDeGastos() const;
    
    void totalizar(map<int,Medicina>med);
    
    void leerMedicinas(ifstream&arch);
    int GetDni();
    
    bool operator<(const class Paciente& pac);
    void operator=(const Paciente& pac);
};


void operator>>(ifstream&, class Paciente&);

#endif /* PACIENTE_MEDICINA_H */

