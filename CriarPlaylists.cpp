#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


void criarPlaylist() 
{
    cin.ignore();
    string nome;
    cout << "Nome da nova playlist: " << endl;
    
    getline(cin, nome);

    string arquivo = nome + ".txt";
	ofstream out(arquivo.c_str());

    if (!out) 
	{
        cout << "Erro ao criar playlist!" << endl;
        system("pause");
        return;
    }

    cout << "Playlist '" << nome << "' criada com sucesso!" << endl;
    system("pause");
}
