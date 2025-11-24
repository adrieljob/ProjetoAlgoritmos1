#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

void removerMusica() {
    cin.ignore();
    string playlist;

    cout << "Nome da playlist: ";
    getline(cin, playlist);

    string arquivo = playlist + ".txt";
    ifstream in(arquivo.c_str());

    if (!in) {
        cout << "Playlist não existe!" << endl;
        system("pause");
        return;
    }

    vector<string> musicas;
    string linha;

    while (getline(in, linha)) {
        musicas.push_back(linha);
    }

    in.close();

    if (musicas.empty()) {
        cout << "Playlist vazia!" << endl;
        system("pause");
        return;
    }

    cout << "\nMÚSICAS NA PLAYLIST:\n";
    for (int i = 0; i < (int)musicas.size(); i++) {
        cout << i + 1 << " - " << musicas[i] << endl;
    }

    int escolha;
    cout << "\nDigite o número da música para remover: ";
    cin >> escolha;

    if (escolha < 1 || escolha > (int)musicas.size()) {
        cout << "Número inválido!" << endl;
        system("pause");
        return;
    }

    musicas.erase(musicas.begin() + (escolha - 1));

    ofstream out(arquivo.c_str());
    for (int i = 0; i < (int)musicas.size(); i++) {
        out << musicas[i] << endl;
    }

    out.close();

    cout << "Música removida com sucesso!\n";
    system("pause");
}
