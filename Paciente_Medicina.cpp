/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Paciente_Medicina.cpp
 * Author: Alexis
 * 
 * Created on 8 de noviembre de 2023, 08:51 AM
 */

#include "Paciente_Medicina.h"

Paciente_Medicina::Paciente_Medicina() {
    totalDeGastos = 0;
}

Paciente_Medicina::Paciente_Medicina(const Paciente_Medicina& orig) {
}

Paciente_Medicina::~Paciente_Medicina() {
}

void Paciente_Medicina::operator=(const Paciente& pac) {
    // copiar paciente  ocon paciente orig, que ya tiene su igualdad
    paciente = pac;
}

void Paciente_Medicina::SetTotalDeGastos(double totalDeGastos) {
    this->totalDeGastos = totalDeGastos;
}

double Paciente_Medicina::GetTotalDeGastos() const {
    return totalDeGastos;
}

void Paciente_Medicina::totalizar(map<int,Medicina>med){
    list<class Medicina_Cantidad>::iterator it;
    for(it = medicina_cantidad.begin(); it!=medicina_cantidad.end(); it++){
        
        
    }
}


void Paciente_Medicina::leerMedicinas(ifstream&arch){
    Medicina_Cantidad med;
    while(arch.get()==','){
        arch>>med;
        if(arch.eof()) break;
        medicina_cantidad.push_back(med);
    }
}

bool Paciente_Medicina::operator<(const Paciente& pac){
    return paciente.GetFechaUltimaConsulta() < pac.GetFechaUltimaConsulta();
}


void operator>>(ifstream&arch, class Paciente&pac){
    int dd,mm,aa, dni, nuevafecha, ultfecha;
    char c, nombre[100],codigomed[10];
    
    arch>>dd;
    if(arch.eof()) return;
    arch>>c>>mm>>c>>aa>>c>>dni>>c;
    arch.getline(nombre,100,',');
    arch.get(codigomed,10,',');
    
    nuevafecha= aa*10000 + mm*100 + dd;
    ultfecha = pac.GetFechaUltimaConsulta();
    if(ultfecha < nuevafecha){
        pac.SetFechaUltimaConsulta(nuevafecha);
    }
    
    pac.SetDni(dni);
    pac.SetNombre(nombre);    
}


int Paciente_Medicina::GetDni(){
    return paciente.GetDni();
}