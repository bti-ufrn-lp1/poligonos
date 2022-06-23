/**
 * @file    poligono.h
 * @brief   Definição da interface Poligono
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   15/06/2022
 * @date    23/06/2022
 */

#ifndef POLIGONO_H
#define POLIGONO_H

/**
 * @class Poligono poligono.h include/poligono.h
 * @brief Interface que representa um polígono qualquer
 * @details Em razão de os métodos desta classe serem virtuais puros, as classes
 *          dela derivadas deverão necessariamente implementar tais métodos. Além disso,
 *          não é possível instanciar objetos desta classe.
 */
class Poligono {
    public:

    /** @brief Exibe as informações do polígono */
    virtual void print() = 0;
    
    /**
     * @brief Calcula a área do polígono em questão
     * @return Área do polígono
     */
    virtual double area() = 0;
};

#endif