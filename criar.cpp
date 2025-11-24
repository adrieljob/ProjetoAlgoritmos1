#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void biblioteca()
{
    int opcao;

    do 
    {
        system("cls");
        cout << "Biblioteca" << endl;
        cout << "1 - Ver Playlists criadas" << endl;
        cout << "2 - Voltar ao menu" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        
        switch(opcao) 
        {
            case 1:
                system("cls");
                cout << "Ver playlists " << endl;
                system("pause");
                break;

            case 2:
                cout << "Voltando ao menu..." << endl;
                system("pause");
                break;
        }

    } while(opcao != 2);
}

