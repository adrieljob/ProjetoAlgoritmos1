#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

void cadastrar()
 {
    string usuario, senha;
    
    cout << "CADASTRAR" << endl;
    cout << "Nome de usuario: " << endl;
    cin >> usuario;
    cout << "Senha: " << endl;
    cin >> senha;
    
    ofstream arquivo("dados.txt", ios::app);
    arquivo << usuario << " " << senha << endl;
    arquivo.close();
    
    cout << "Usuario cadastrado com sucesso!" << endl;
    system("pause");
	system("cls");
}