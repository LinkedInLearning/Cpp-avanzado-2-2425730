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
private:
    string nombre, primerApellido;
};

class Supervisor : public Empleado {
public:
    Supervisor(string _nombre, string _primerApellido, int _idEquipo) : Empleado(_nombre, _primerApellido){
        idEquipo = _idEquipo;
    }
    ~Supervisor();
private:
    int idEquipo;
};

Supervisor::~Supervisor(){
    Empleado::~Empleado();
    cout << "Un objeto de tipo Supervisor está siendo eliminado." << endl;
}

int main(){

    return 0;
}