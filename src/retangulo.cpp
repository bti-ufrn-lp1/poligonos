/**
 * @file    retangulo.cpp
 * @brief   Implementação da classe Retangulo
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   15/06/2022
 * @date    23/06/2022
 * @sa      retangulo.h
 */

#include <iostream>
using std::cout;
using std::endl;

#include "retangulo.h"

/**
 * @brief Construtor parametrizado
 * @param l Largura do retângulo
 * @param a Altura do retângulo
 */
Retangulo::Retangulo(double l, double a) :
    largura(l), altura(a) {}

/**
 * @brief Retorna a largura do retângulo
 * @return Largura do retângulo
 */
double Retangulo::getLargura() {
    return largura;
}

/**
 * @brief Modifica a largura do retângulo
 * @param l Valor da largura
 */
void Retangulo::setLargura(double l) {
    largura = l;
}

/**
 * @brief Retorna a altura do retângulo
 * @return Altura do retângulo
 */
double Retangulo::getAltura() {
    return altura;
}

/**
 * @brief Modifica a altura do retângulo
 * @param a Valor da altura
 */
void Retangulo::setAltura(double a) {
    altura = a;
}

/** @brief Exibe as informações de largura e altura do retângulo */
void Retangulo::print() {
    cout << "Retângulo: largura = " << largura << ", altura = " << altura << endl;
}

/**
 * @brief Calcula a área do retângulo
 * @return Área do retângulo
 */
double Retangulo::area() {
    return largura * altura;
}