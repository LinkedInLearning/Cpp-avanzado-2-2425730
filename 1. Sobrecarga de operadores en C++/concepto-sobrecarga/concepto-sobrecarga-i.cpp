/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
 
#include <iostream>
#include <cstring>
using namespace std;

void mostrarMensaje(string nombre, string apellido1);
void mostrarMensaje(string username);

int main(){
    
    mostrarMensaje("Eliezer", "López");
    mostrarMensaje("@eliezerlopez");

    return 0;
}

void mostrarMensaje(string nombre, string apellido1){
    cout << endl << nombre << " " << apellido1 << " ha accedido al sistema." << endl;
}

void mostrarMensaje(string username){
    cout << endl << "El usuario " << username << " ha accedido al sistema." << endl;
    cout << endl;
}