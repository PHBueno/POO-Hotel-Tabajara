#include <iostream>
#include <algorithm>
#include "Hotel.hpp"
using namespace std;

void menu()
{
    cout << "\n\n=-=-=-=-= HOTEL TABAJARA =-=-=-=-=-=\n";
    cout << endl 
    <<"1 - Hospedar Cliente;\n"
    <<"2 - Verificar Quartos;\n"
    <<"3 - Relatório do Cliente;\n"
    <<"4 - Relatório Geral;\n"
    <<"5 - Sair;\n";
}

int main(void)
{
    Hotel Tabajara;
    string nome, nome_atendente;
    int periodo, nro_quarto, escolha;
    char tipo_quarto;
    bool result = true;

    cout << "Por favor, informe o nome do antendente: ";
    cin >> nome_atendente;

    do
    {
        menu();
        cout << "\nEscolha: ";
        cin >> escolha;

        switch (escolha)
        {
        case 1:
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
            break;
        
        case 2:
            Tabajara.relatorio_quartos_ocupados();
            break;
        
        case 3:
            break;

        case 4:
            cout << "\n=-=-=-=-= RELATÓRIO GERAL =-=-=-=-=-=\n";
            cout << "Nome Atendente: " << nome_atendente << endl;
            Tabajara.relatorio_geral();
            break;
        
        case 5:
            break;
        
        default:
            cout << "Não é uma opção válida, tente novamente.\n";
            break;
        }
    }while(escolha != 5);
}