/* 
 * File:   main.cpp
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 08:39 AM
 */

#include "ServicioDeSalud.h"

int main(int argc, char** argv) {
    class ServicioDeSalud servicioDeSalud;
    
    servicioDeSalud.leerMedicinas("Medicinas-Preg01.csv");
    servicioDeSalud.imprimirMedicinas("PruebaMedicinas.txt");
    servicioDeSalud.leerConsultas("Consultas-Preg01.csv");
    
    return 0;
}

