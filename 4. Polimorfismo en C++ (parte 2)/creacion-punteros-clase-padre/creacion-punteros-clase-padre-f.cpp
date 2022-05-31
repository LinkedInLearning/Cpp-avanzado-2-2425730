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
    // virtual void mostrarInformacion() const;
protected:
    string nombre, primerApellido;
};

class Supervisor : public Empleado {
public:
    Supervisor(string _nombre, string _primerApellido, int _idEquipo) : Empleado(_nombre, _primerApellido){
        idEquipo = _idEquipo;
    };
    void mostrarInformacion() const;
private:
    int idEquipo;
};

void Supervisor::mostrarInformacion() const{
    cout << "El Supervisor " << nombre << " " << primerApellido << " gestiona el equipo número " << idEquipo << "." << endl;
}

class Director : public Empleado {
public:
    Director(string _nombre, string _primerApellido, int _idEquipo, float _presupuestoAnual): Empleado(_nombre, _primerApellido){
        idEquipo = _idEquipo;
        presupuestoAnual = _presupuestoAnual;
    };
    void mostrarInformacion() const;
private:
    int idEquipo;
    float presupuestoAnual;
};

void Director::mostrarInformacion() const{
    cout << "El Director " << nombre << " " << primerApellido << " dispone de un presupuesto de " << presupuestoAnual <<  "euros para gestionar el equipo número " << idEquipo << "." << endl;
}

int main(){

    Supervisor *supervisor = new Supervisor("Dwight", "Schrute", 18);
    Director *director = new Director("Michael", "Scott", 1, 90500.30);
    Empleado *empleado;
    
    return 0;
};

/*
void Empleado::mostrarInformacion() const{
    cout << "El empleado se llama " << nombre << " " << primerApellido << endl;
}
*/