#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void biblioteca();
void menuPlaylist();
void recomendarMusicas();

void menu() 
{
    int opcao;
    
    do 
	{
        system("cls");
        cout << "MENU PRINIPAL" << endl;
      	cout << "1 - Ver playlists" << endl;
		cout << "2 - Criar algo novo" << endl;
        cout << "3 - Sair da conta" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        
        switch(opcao) 
		{
        	//CRIAR
           case 1:
            	menuPlaylist();
                break;
            
       	   case 2:
            	recomendarMusicas();
                break;
            
            case 3:
                cout << "Saindo da conta..." << endl;
                system("cls");
                system("pause");
                break;

            default:
                cout << "Opcao invalida!" << endl;
                system("cls");
                system("pause");
        }
    } while(opcao != 3);
}