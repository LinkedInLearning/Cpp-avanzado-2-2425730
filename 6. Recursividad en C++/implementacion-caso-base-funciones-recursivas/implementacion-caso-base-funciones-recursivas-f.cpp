/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

int main(){

    return 0;
}

int factorial(int numero){

    if(numero < 1){
        return 1;
    }
    else{
        return numero*factorial(numero-1);
    }
}