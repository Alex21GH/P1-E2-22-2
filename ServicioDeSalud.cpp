/* 
 * File:   ServicioDeSalud.cpp
 * Author: Alexis
 * 
 * Created on 8 de noviembre de 2023, 09:00 AM
 */

#include "ServicioDeSalud.h"


void ServicioDeSalud::leerMedicinas(const char*archnomb){
    ifstream arch(archnomb,ios::in);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo "<<archnomb<<endl;
        exit(1);
    }
    
    class Medicina med;
    while(true){
        arch>>med;
        if(arch.eof()) break;
        medicina[med.GetCodigo()] = med;
    }
    
}

void ServicioDeSalud::imprimirMedicinas(const char*archnomb){
    ofstream arch(archnomb,ios::out);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo "<<archnomb<<endl;
        exit(1);
    }
    
    for(auto m:medicina){
        arch<<m.second;
    }
}

void ServicioDeSalud::leerConsultas(const char*archnomb){
    ifstream arch(archnomb,ios::in);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo "<<archnomb<<endl;
        exit(1);
    }
    
    class Paciente pac;
    list<class Paciente_Medicina>::iterator itPacMed;
    while(true){
        class Paciente_Medicina pacMed; /* Si no lo creo, entonces los pacientes van a acumular
                                            medicinas de los anteriores, y el ultimo paciente quedara cn 200, tal vez*/
        arch>>pac;
        if(arch.eof()) break;
        itPacMed = buscarPaciente(pac.GetDni());
        if(itPacMed == paciente_medicina.end()){ // No lo encontramos
            pacMed = pac;
            
            paciente_medicina.push_back(pacMed);
        }else{ // Lo encontramos
            if(*itPacMed < pac)
                pacMed = pac; // para simplicar, copiamos todo, la fecha actualizada 
            itPacMed->leerMedicinas(arch);
        }
        /* Si se quiere mantener:  class Paciente_Medicina pacMed;
         se debe hacer erase a su list, para que no se acumule
         */
    }
}

list<class Paciente_Medicina>::iterator ServicioDeSalud::buscarPaciente(int dni){
    for(list<class Paciente_Medicina>::iterator iter=paciente_medicina.begin();
            iter!=paciente_medicina.end(); iter++){
        if(iter->GetDni() == dni) return iter;
    }
    return paciente_medicina.end(); 
}


void ServicioDeSalud::totalizar(){
    for(list<class Paciente_Medicina>::iterator iter=paciente_medicina.begin();
            iter!=paciente_medicina.end(); iter++){
        
        
        
    }
}

void ServicioDeSalud::imprimePacientes(const char*archnomb){
    ofstream arch(archnomb,ios::out);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo "<<archnomb<<endl;
        exit(1);
    }
    
    
//    while(true){
//        
//    }
    
}