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
        bool get_ocupado(int nro_quarto);
        
    private:

        vector <int> quartos_ocupados;
        vector <Cliente> clientes;
};
