/**
 * @file    retangulo.h
 * @brief   Definição da classe Retangulo
 * @details A classe Retangulo implementa a interface Poligono
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   15/06/2022
 * @date    23/06/2022
 * @sa      poligono.h
 */

#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"

/**
 * @class Retangulo retangulo.h include/retangulo.h
 * @brief Classe que representa um retângulo
 * @details A classe Retangulo implementa a interface Poligono
 */
class Retangulo : public Poligono {
    private:

    /** @brief Largura do retângulo */
    double largura;

    /** @brief Altura do retângulo */
    double altura;

    public:

    /**
     * @brief Construtor parametrizado
     * @param l Largura do retângulo
     * @param a Altura do retângulo
     */
    Retangulo(double l, double a);

    /**
     * @brief Retorna a largura do retângulo
     * @return Largura do retângulo 
     */
    double getLargura();

    /**
     * @brief Modifica a largura do retângulo
     * @param l Valor da largura
     */
    void setLargura(double l);

    /**
     * @brief Retorna a altura do retângulo
     * @return Altura do retângulo
     */
    double getAltura();

    /**
     * @brief Modifica a altura do retângulo
     * @param a Valor da altura
     */
    void setAltura(double a);

    /** @brief Exibe as informações de largura e altura do retãngulo */
    void print();
    
    /**
     * @brief Calcula a área do retângulo
     * @return Área do retângulo
     */
    double area();
};

#endif