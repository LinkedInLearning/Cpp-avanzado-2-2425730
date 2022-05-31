/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

template <typename T> bool mayor(T a, T b){
    return (a > b);
}

int main(){

    int numEntero1 = 10, numEntero2 = 5;
    float numReal1, numReal2;

    bool esMayor = mayor(numReal1, numReal2);

    return 0;
}