/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>
#include <iostream>
using namespace std;

class Empleado {
public:
    Empleado(string _nombre, string _primerApellido) : nombre(_nombre), primerApellido(_primerApellido){};
    string mostrarInformacion() const;
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

class Supervisor : public Empleado {
public:
    Supervisor(string _nombre, string _primerApellido, int _idEquipo) : Empleado(_nombre, _primerApellido){
        idEquipo = _idEquipo;
    };
private:
    int idEquipo;
};

class Director : public Empleado {
public:
    Director(string _nombre, string _primerApellido, int _idEquipo, float _presupuestoAnual): Empleado(_nombre, _primerApellido){
        idEquipo = _idEquipo;
        presupuestoAnual = _presupuestoAnual;
    };
private:
    int idEquipo;
    float presupuestoAnual;
};

string Empleado::mostrarInformacion() const{
    return (nombre + " " + primerApellido);
}

int main(){
    
    return 0;
};