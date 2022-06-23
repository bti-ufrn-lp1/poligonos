/**
 * @file    triangulo.h
 * @brief   Definição da classe Triangulo
 * @details A classe Triangul implementa a interface Poligono
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   15/06/2022
 * @date    23/06/2022
 * @sa      poligono.h
 */

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "poligono.h"

/**
 * @class Triangulo triangulo.h include/triangulo.h
 * @brief Classe que representa um triângulo
 * @details A classe Triangulo implementa a interface Poligono
 */
class Triangulo : public Poligono {
    private:

    /** @brief Base do triângulo */
    double base;

    /** @brief Altura do retângulo */
    double altura;

    public:
    
     /**
      * @brief Construtor parametrizado
      * @param b Tamanho da base do triângulo
      * @param a Altura do triângulo
      */
     Triangulo(double b, double a);

     /**
      * @brief Retorna o tamanho da base do triângulo
      * @return Tamanho da base do triângulo
      */
     double getBase();

     /**
      * @brief Modifica o tamanho da base do triângulo
      * @param b Valor do tamanho da base
      */
     void setBase(double b);

     /**
      * @brief Retorna a altura do triângulo
      * @return Altura do triângulo
      */
     double getAltura();

     /**
      * @brief Modifica a altura do triângulo
      * @param a Valor da altura
      */
     void setAltura(double a);

     /** @brief Exibe as informações de tamanho de base e altura do triângulo */
     void print();

     /**
      * @brief Calcula a área do triângulo
      * @return Área do triângulo
      */
     double area();
};

#endif