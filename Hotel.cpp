#include <iostream>
#include "Hotel.hpp"
using namespace std;

Hotel::Hotel(){}

vector <int> Hotel::get_quartos_ocupados()
{
    return quartos_ocupados;
}

void Hotel::reserva_quarto(string nome_usuario, int periodo_dias, int nro_quarto, char tipo_quarto)
{
    clientes.push_back(Cliente(nome_usuario, periodo_dias, nro_quarto, tipo_quarto));
    quartos_ocupados.push_back(nro_quarto);
}