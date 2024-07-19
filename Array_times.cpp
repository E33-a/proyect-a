#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int row1, col1, row2, col2;
    bool yes = false;
    char r;

    do{
        system("cls");
        cout << "\nPRODUCTO DE MATRICES";
        cout << "\n-----------------------------------------------------------\n";
        cout << "\nMATRIZ 1\n";
        cout << "Ingresa las filas de la matriz 1: "; cin >> row1;
        cout << "Ingresa las columnas de la matriz 1: "; cin >> col1;
        cout << "\n-----------------------------------------------------------\n";
        int arr1[row1][col1];
        for(int o = 0; o < row1; o++){
            for(int b = 0; b < col1; b++){
                cout << "Ingresa el elmento " << o+1 << ", " << b+1 << ": "; cin >> arr1[o][b];
            }
        }
        cout << "\n-----------------------------------------------------------\n";
        cout << "\nMATRIZ 2\n";
        do{
            cout << "\nIngresa las filas de la matriz 2: "; cin >> row2;
            cout << "\nIngresa las columnas de la matriz 2: "; cin >> col2;
            if(col1 == row2){
                yes = true;
            }else{
                cout << "\nLa columna de la primer matriz debe coicidir con las filas de la segunda\n";
                cout << "Introduce de nuevo las dimensiones de la matriz 2\n";
            }
        }while(yes == false);

        int arr2[row2][col2], R[row1][col2];
        cout << "\n-----------------------------------------------------------\n\n";
        for(int h = 0; h < row2; h++){
            for(int m = 0; m < col2; m++){
                cout << "Ingresa el elmento " << h+1 << ", " << m+1 << ": "; cin >> arr2[h][m];
            }
        }
        cout << "\n-----------------------------------------------------------\n\n";
    //array times--------------------------------------------------------------------------
        for(int c = 0; c < row1; c++){
            for(int a = 0; a < col2; a++){
                R[c][a] = 0; //E1, E2, E3, E4
                for(int d = 0; d < col1; d++){
                    R[c][a] += arr1[c][d] * arr2[d][a]; 
                }
            }
        }

    system("cls");
    //Show---------------------------------------
    cout << "\n\n\nMATRIZ 1\n\n";
    //arr1-------------------
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col1; j++){
                std:: cout << "|" << arr1[i][j] << "| ";
            }
            std:: cout << "\n\n";
        }

    cout << "\n\nMATRIZ 2\n\n";
    //arr2-------------------
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < col2; j++){
                std:: cout << "|" << arr2[i][j] << "| ";
            }
            std:: cout << "\n\n";
        }

    cout << "\n\nRESULTADO\n\n";
    //R----------------------
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col2; j++){
                std:: cout << "|" << R[i][j] << "| ";
            }
            std:: cout << "\n\n";
        }
    cout << "\n\nDeseas repetir la accion  s/n: "; cin >> r;
    }while(r == 's' || r == 'S');

    system ("pause > null");
    return 0;
}