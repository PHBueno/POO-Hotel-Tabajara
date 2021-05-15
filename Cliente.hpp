#include <iostream>
using namespace std;

class Cliente
{
    public:

        Cliente(string nome, int periodo_dias, int nro_quarto, char tipo_quarto);

        void set_nome(string nome);
        void set_nro_quarto(int nro_quarto);
        void set_tipo_quarto(char tipo_quarto);
        void set_periodo_dias(int periodo_dias);

        string get_nome();
        int get_nro_quarto();
        int get_periodo_dias();
        char get_tipo_quarto();
        int get_qnt_reservas();

    private:
    
        string nome;
        int nro_quarto;
        int periodo_dias;
        char tipo_quarto;
        int reservas;
        int static qnt_reservas;
};
