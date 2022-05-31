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

    Coordenada <float> coordenada1(10.5,21.3);
    cout << coordenada1.getCoordenadaX() << endl;

    Coordenada <int> coordenada2(2, 15);
    cout << coordenada2.getCoordenadaY() << endl;

    return 0;
}

template <typename T>
Coordenada<T>::Coordenada(T x, T y){
    coordenadaX = x;
    coordenadaY = y;
}

template <typename T>
T Coordenada<T>::getCoordenadaX() const{
    return coordenadaX;
}

template <typename T>
T Coordenada<T>::getCoordenadaY() const{
    return coordenadaY;
}