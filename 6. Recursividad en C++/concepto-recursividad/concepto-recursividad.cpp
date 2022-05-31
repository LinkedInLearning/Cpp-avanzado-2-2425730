/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

void mostrarValorHastaCero(int numero);

int main(){

    mostrarValorHastaCero(10);

    return 0;
}

void mostrarValorHastaCero(int numero){
    if(numero >= 0){
        printf("%d ", numero);
        mostrarValorHastaCero(numero-1);
    }
}