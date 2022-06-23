/**
 * @file    main.cpp
 * @brief   Implementação do programa principal
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   15/06/2022
 * @date    23/06/2022
 */

#include <iostream>
using std::cout;
using std::endl;

#include "poligono.h"
#include "retangulo.h"
#include "triangulo.h"

/** @brief Função principal */
int main() {
    Poligono* r = new Retangulo(1, 2);
    r->print();
    cout << "Área do retängulo: " << r->area() << endl << endl;

    Poligono* t = new Triangulo(3, 4);
    t->print();
    cout << "Área do triângulo: " << t->area() << endl;
};