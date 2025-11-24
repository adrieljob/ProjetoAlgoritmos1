#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void adicionarMusica() 
{
    cin.ignore();
    string playlist, musica;

    cout << "Digite o nome da playlist: " << endl;
    getline(cin, playlist);

    string arquivo = playlist + ".txt";

    cout << "Nome da musica para adicionar: " << endl;
    getline(cin, musica);

	ofstream out(arquivo.c_str(), ios::app);

    if (!out) 
	{
        cout << "Playlist não existe!" << endl;
        system("pause");
        return;
    }

    out << musica << endl;
    out.close();

    cout << "Musica adicionada!" << endl;
    system("pause");
}
