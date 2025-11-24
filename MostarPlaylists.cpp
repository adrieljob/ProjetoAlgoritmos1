#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void exibirPlaylist() 
{
    cin.ignore();
    string playlist;

    cout << "Nome da playlist para exibir: " << endl;
    getline(cin, playlist);

    string arquivo = playlist + ".txt";
    ifstream in(arquivo.c_str());

    if (!in) {
        cout << "Playlist não existe!" << endl;
        system("pause");
        return;
    }

    cout << "--- Playlist: " << playlist << " ---" << endl;

    string musica;
    int num = 1;

    while (getline(in, musica)) 
	{
        cout << num++ << ". " << musica << endl;
    }

    in.close();
    system("pause");
}
