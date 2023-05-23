#include <iostream>
using namespace std;
int main()
{
    char kr = 'X';
    char O = 'O';
    int coo1;
    int coo2;
    int a = 0;
    string mas[3][3] = { { "00","01","02" }, { "10","11","12" }, { "20","21","22" } };
    cout << "first step give to X\n\n";
    char sad;
    char mas1[3][3]{ };
    while (1) {
        cout << "free cells\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mas[i][j] << '\t';
            }
            cout << "\n \n";
        }
        
        cout << "if you wanna leave press [n]\nif you're ready press [y]\n";
        cin >> sad;
        cout << "enter dots coordinate\n";
        if (sad == 'y') {
            if (a == 0) {
m1:
                cin >> coo1 >> coo2;
                if (mas1[coo1][coo2] != 'X' and mas1[coo1][coo2] != 'O') {
                    mas1[coo1][coo2] = 'X';
                    mas[coo1][coo2] = 'X';
                    a = a + 1;
                }
                else { cout << "choose other cell\n"; goto m1; }
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << " |" << mas1[i][j] << " |";
                    }
                    cout << "\n\n";
                }
                cout << "\n\n" << "O player turn\n";
            }
        }
        if (a == 1) {
m2:            
            cin >> coo1 >> coo2;
            if (mas1[coo1][coo2] != 'X' and mas1[coo1][coo2] != 'O') {
                mas1[coo1][coo2] = 'O';
                mas[coo1][coo2] = 'O';
                a = a - 1;
            }
            else { cout << "choose other cell\n"; goto m2; }
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << " |" << mas1[i][j] << " |";
                }
                cout << "\n\n";
            }

        }
        if (sad == 'n') {
            break;
        }
    }
}