/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ServicioDeSalud.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 09:00 AM
 */

#ifndef SERVICIODESALUD_H
#define SERVICIODESALUD_H
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
#include <map>
#include <list>
#include "Medicina.h"
#include "Paciente_Medicina.h"


class ServicioDeSalud {
private:
    map<int,Medicina>medicina;
    list<Paciente_Medicina>paciente_medicina;
public:
    void leerMedicinas(const char*);
    void imprimirMedicinas(const char*);
    void leerConsultas(const char*);
    void totalizar();
    void imprimePacientes(const char*);
    
    list<class Paciente_Medicina>::iterator buscarPaciente(int);
};

#endif /* SERVICIODESALUD_H */

