/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

template <typename T>
class Coordenada {

public:
    Coordenada(T x, T y);
    T getCoordenadaX() const;
    T getCoordenadaY() const;

private:
    T coordenadaX;
    T coordenadaY;
};

int main(){

    return 0;
}

Coordenada::Coordenada(float x, float y){
    coordenadaX = x;
    coordenadaY = y;
}

float Coordenada::getCoordenadaX() const{
    return coordenadaX;
}

float Coordenada::getCoordenadaY() const{
    return coordenadaY;
}