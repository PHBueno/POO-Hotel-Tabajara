#include <iostream>
#include <algorithm>
#include "Hotel.hpp"
using namespace std;

int main(void)
{
    Hotel Tabajara;
    string nome;
    int periodo, nro_quarto;
    char tipo_quarto, continuar;
    bool result = true;
    
    while(continuar != 'N')
    {
        
        cout << "Informe o nome do cliente: ";
        cin >> nome;
        cout << "Quanto tempo, em dias, irá se hospedar? ";
        cin >> periodo;
        cout << "Informe o tipo de quarto (S) -> Simple / (L) -> Luxo: ";
        cin >> tipo_quarto;

        while(result == true)
        {
            result = false;
            cout << "Qual número do quarto para hospedar? ";
            cin >> nro_quarto;
            for(int i=0; i<Tabajara.get_quartos_ocupados().size(); i++)
            {
                if(nro_quarto == Tabajara.get_quartos_ocupados()[i])
                {
                    result = true;
                }
            }
        }
        result = true;
    
        Tabajara.reserva_quarto(nome, periodo, nro_quarto, tipo_quarto);

        cout << "Inserir mais um usuário (Y/N)? ";
        cin >> continuar;
    }

    for (int i = 0; i < Tabajara.get_quartos_ocupados().size(); i++)
    {
        cout << Tabajara.get_quartos_ocupados()[i] << endl;
    }
    
}