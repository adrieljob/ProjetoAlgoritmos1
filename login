#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

bool login() {
    string nomeDigitado, senhaDigitada;
    string nomeArquivo, senhaArquivo;

    cout << "\nLOGIN\n";
    cout << "Usuario: ";
    cin >> nomeDigitado;
    cout << "Senha: ";
    cin >> senhaDigitada;

    ifstream arquivo("usuarios.txt");
    if (arquivo.is_open()) {
        while (arquivo >> nomeArquivo >> senhaArquivo) {
            if (nomeArquivo == nomeDigitado && senhaArquivo == senhaDigitada) {
                cout << "\nLogin realizado com sucesso! Bem-vindo, " << nomeDigitado << "!\n";
                arquivo.close();
                system("pause");
                system("cls");
                return true;
            }
        }
        arquivo.close();
    } else {
        cout << "\nErro ao abrir o arquivo de usuarios.\n";
    }

    cout << "\nUsuario ou senha incorretos.\n";
    system("pause");
    system("cls");
    return false;
}
