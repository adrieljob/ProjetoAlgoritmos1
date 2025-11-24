#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void cadastrar();
void login();

int main() 
{
    int opcao;
    
    do 
	{
        system("cls");
        cout << "Spotify.apk " << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Login" << endl;
        cout << "3 - Sair " << endl;
        cout << "Escolha uma opcao: " << endl;
        cin >> opcao;
        system("cls");
        
        switch(opcao) 
		{
            case 1:
                cadastrar();
                break;
            case 2:
                login();
                break;
            case 3:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                system("pause");
        }
    } while(opcao != 3);
    
    return 0;
}