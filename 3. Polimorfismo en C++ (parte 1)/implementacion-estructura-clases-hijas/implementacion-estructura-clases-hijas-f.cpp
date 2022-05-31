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
    virtual void mostrarInformacion() const = 0;
private:
    string nombre, primerApellido;
};

class Supervisor : public Empleado {
public:
    Supervisor(string _nombre, string _primerApellido, int _idEquipo) : Empleado(_nombre, _primerApellido){
        idEquipo = _idEquipo;
    };
    void mostrarInformacion() const;
    // El Supervisor Eliezer Lopez gestiona el equipo número 18.
private:
    int idEquipo;
};

class Director : public Empleado {
public:
    Director(string _nombre, string _primerApellido, int _idEquipo, float _presupuestoAnual): Empleado(_nombre, _primerApellido){
        idEquipo = _idEquipo;
        presupuestoAnual = _presupuestoAnual;
    };
    void mostrarInformacion() const;
    // El Director Eliezer López dispone de un presupuesto de 90.000€ para gestionar el equipo número 18.

private:
    int idEquipo;
    float presupuestoAnual;
};

int main(){
    
    return 0;
};