/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

class Coordenada {

public:
    Coordenada(float x, float y);
    float getCoordenadaX() const;
    float getCoordenadaY() const;

private:
    float coordenadaX;
    float coordenadaY;
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