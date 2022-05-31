/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream> // revisar codigos
#include <cstring>
using namespace std;

class Empleado{

public:
    Empleado(string nombre, string apellido1);
    string getNombre() const;
    string getPrimerApellido() const;

private:
    string nombre_, apellido1_;
};

ostream& operator <<(ostream &flujo, const Empleado &empleado){
    flujo << "El empleado " << empleado.getNombre() << " " << empleado.getPrimerApellido() << " está utilizando el sistema." << endl;
    return flujo;
}

int main(){

    Empleado empleadoActual("Eliezer", "Lopez");

    cout << empleadoActual << endl;

    return 0;
}

Empleado::Empleado(string nombre, string apellido1){
    nombre_ = nombre;
    apellido1_ = apellido1;
}

string Empleado::getNombre() const{
    return nombre_;
}

string Empleado::getPrimerApellido() const{
    return apellido1_;
}