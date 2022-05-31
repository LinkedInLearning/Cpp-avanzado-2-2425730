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
    void setNombre(string _nombre);
    void setPrimerApellido(string _primerApellido);
    string nombreCompleto() const;
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

class Supervisor : public Empleado {
public:
    void setIdEquipo(int id);
private:
    int idEquipo;
};

class Director : public Supervisor {
public:
    void setPresupuestoAnual(float _presupuestoAnual);
private:
    float presupuestoAnual;
};

int main(){
    
    Director();
    
    return 0;
};

string Empleado::nombreCompleto() const{
    return (nombre + " " + primerApellido);
}

void Empleado::setNombre(string _nombre){
    nombre = _nombre;
}

void Empleado::setPrimerApellido(string _primerApellido){
    primerApellido = _primerApellido;
}

void Supervisor::setIdEquipo(int id){
    idEquipo = id;
}

void Director::setPresupuestoAnual(float _presupuestoAnual){
    presupuestoAnual = _presupuestoAnual;
}