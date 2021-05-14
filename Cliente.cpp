#include <iostream>
#include "Cliente.hpp"
using namespace std;

int Cliente::qnt_reservas = 0;

Cliente::Cliente(string nome, int periodo_dias, int nro_quarto, char tipo_quarto)
{
    this->nome = nome;
    this->periodo_dias = periodo_dias;
    this->nro_quarto = nro_quarto;
    this->tipo_quarto = tipo_quarto;
    get_qnt_reservar = ++qnt_reservas;
}

void Cliente::set_nome(string nome)
{
    this->nome = nome;
}

void Cliente::set_nro_quarto(int nro_quarto)
{
    this->nro_quarto = nro_quarto;
}

void Cliente::set_periodo_dias(int periodo_dias)
{
    this->periodo_dias = periodo_dias;
}

void Cliente::set_tipo_quarto(char tipo_quart)
{
    this->tipo_quarto = tipo_quarto;
}

string Cliente::get_nome()
{
    return nome;
}

int Cliente::get_nro_quarto()
{
    return nro_quarto;
}

int Cliente::get_periodo_dias()
{
    return periodo_dias;
}

char Cliente::get_tipo_quarto()
{
    return tipo_quarto;
}