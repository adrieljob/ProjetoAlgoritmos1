#include <iostream>
#include <cstdlib>
using namespace std;

void criarPlaylist();
void adicionarMusica();
void exibirPlaylist();
void removerMusica();

void menuPlaylist() 
{
    int opc;

    do 
	{
        system("cls");
        cout << "MENU DE PLAYLIST" << endl;
        cout << "1 - Criar playlist" << endl;
        cout << "2 - Adicionar musica" << endl;
        cout << "3 - Exibir playlist" << endl;
        cout << "4 - Remover musica" << endl;
        cout << "5 - Voltar" << endl;
        cout << "Escolha: " << endl;
        cin >> opc;

        switch (opc) 
		{
            case 1: 
				criarPlaylist(); 
			break;
		
            case 2: 
				adicionarMusica(); 
			break;
		
            case 3: 
				exibirPlaylist(); 
			break;
		
            case 4: 
				removerMusica(); 
			break;
            
			case 5: 
			break;
            default:
                cout << "Opcao invalida!" << endl;
                
                system("pause");
        }

    } while (opc != 5);
}
