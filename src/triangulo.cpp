/**
 * @file    triangulo.cpp
 * @brief   Implementação da classe Triangulo
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   15/06/2022
 * @date    23/06/2022
 * @sa      triangulo.h
 */

#include <iostream>
using std::cout;
using std::endl;

#include "triangulo.h"

/**
 * @brief Construtor parametrizado
 * @param b Tamanho da base do triângulo
 * @param a Altura do triângulo
 */
Triangulo::Triangulo(double b, double a) : base(b), altura(a) {}

/**
 * @brief Retorna o tamanho da base do triângulo
 * @return Tamanho da base do triângulo
 */
double Triangulo::getBase() { 
    return base; 
}

/**
 * @brief Modifica o tamanho da base do triângulo
 * @param b Valor do tamanho da base
 */
void Triangulo::setBase(double b) { 
    base = b; 
}

/**
 * @brief Retorna a altura do triângulo
 * @return Altura do triângulo
 */
double Triangulo::getAltura() { 
    return altura; 
}

/**
 * @brief Modifica a altura do triângulo
 * @param a Valor da altura
 */
void Triangulo::setAltura(double a) { 
    altura = a; 
}

/** @brief Exibe as informações de largura e altura do triângulo */
void Triangulo::print() {
    cout << "Triângulo: base = " << base << ", altura = " << altura << endl;
}

/**
 * @brief Calcula a área do triângulo
 * @return Área do triângulo
 */
double Triangulo::area() { 
    return (base * altura) / 2; 
}