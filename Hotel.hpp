#include <iostream>
#include <vector>
#include "Cliente.hpp"
using namespace std;

class Hotel
{
    public:

        Hotel();
        vector <int> get_quartos_ocupados();
        void reserva_quarto(string nome_usuario, int periodo_dias, int nro_quarto, char tipo_quarto);
        void relatorio_quartos_ocupados();
        void relatorio_geral();
        void relatorio_cliente(string nome_usuario);
        
    private:

        vector <int> quartos_ocupados;
        vector <Cliente> clientes;
};
