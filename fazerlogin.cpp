#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

void menu();

void login() 
{
    string usuario, senha;
    string usuarioArq, senhaArq;
    bool usuarioexiste = false;
    

    cout << "FAZER LOGIN" << endl;
    cout << "Nome de usuario: " << endl;
    cin >> usuario;
    cout << "Senha: " << endl;
    cin >> senha;
	system("cls");
    
    ifstream arquivo("dados.txt");
    while(arquivo >> usuarioArq >> senhaArq) 
	{
        if(usuarioArq == usuario && senhaArq == senha) 
		{
            usuarioexiste = true;
            break;
        }
    }
    arquivo.close();
    
    if(usuarioexiste) 
	{
        cout << "Login realizado com sucesso!" << endl;
        system("pause");
        system("cls");
        menu();
    } 
	else 
	{
        cout << "Usuario ou senha incorretos!" << endl;
        system("pause");
        system("cls");
    }
}