/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

bool mayor(int a, int b);
bool mayor(char a, char b);

template <typename T>
bool mayor(T a, T b);

int main(){

    return 0;
}

bool mayor(int a, int b){
    return (a > b);
}

bool mayor(char a, char b){
    return (a > b);
}