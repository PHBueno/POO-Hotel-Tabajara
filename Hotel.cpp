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

void Hotel::relatorio_quartos_ocupados()
{
    cout << "\n\n=-=-=-=-= RELATÓRIO DE QUARTOS OCUPADOS =-=-=-=-=\n";
    for(int i=0; i<quartos_ocupados.size(); i++)
    {
        cout << quartos_ocupados[i] << ", ";
    }
}

void Hotel::relatorio_geral()
{
    string tipo_quarto;
    for(int i=0; i<clientes.size(); i++)
    {
        if(clientes[i].get_tipo_quarto() == 'L')
        {
            tipo_quarto = "Luxo";
        }
        else
        {
            tipo_quarto = "Simples";
        }
        cout << "Nome: " << clientes[i].get_nome() << endl;
        cout << "NO. Quarto: " << clientes[i].get_nro_quarto() << endl;
        cout << "Tipo de Quarto: " << tipo_quarto << endl;
        cout << "Quantidade de Dias: " << clientes[i].get_periodo_dias() << endl;
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    }
}

void Hotel::relatorio_cliente(string nome_usuario)
{
    cout << "\n\n=-=-=-=-=-= RELATÓRIO DE CLIENTE =-=-=-=-=-=\n";
    for(int i=0; i<clientes.size(); i++)
    {
        if(nome_usuario == clientes[i].get_nome())
        {
            cout << "Nome: " << clientes[i].get_nome() << endl;
            cout << "NO. Quarto: " << clientes[i].get_nro_quarto() << endl;
            cout << "Quantidade de Dias: " << clientes[i].get_periodo_dias() << endl;
            cout << "Quantidade de Reservas: " << clientes[i].get_qnt_reservas() << endl;
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        }
    }
}