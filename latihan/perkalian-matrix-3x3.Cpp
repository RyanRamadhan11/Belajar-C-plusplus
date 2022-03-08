//RYAN RAMADHAN
#include <iostream>
#include<conio.h>
#include <windows.h>
using namespace std;

#define Nmaks 10
typedef int matrik[Nmaks][Nmaks];
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
  matrik A,B,C;
  int i, j, k, n =3 , jumlah = 0;

    cout<<"Program Perkalian Matriks 3x3"<<endl;
    cout<<"By: RYAN RAMADHAN"<<endl;
    cout<<endl;

    //INPUT MATRIKS A
    cout << "Masukkan elemen matriks A: \n";
    for(i = 1; i <= n ; i++){
      for(j = 1; j <= n; j++){
        cout<<"A["<<i<<","<<j<<"] = ";
        cin >> A[i][j];
      }
    }
  system("cls");
  //INPUT MATRIKS B
     cout<<"Program Perkalian Matriks 3x3"<<endl;
    cout<<"By: RYAN RAMADHAN"<<endl;
    cout<<endl;

    cout << "Masukkan elemen matriks B: \n";
    for(i = 1; i <= n; i++){
      for(j = 1; j <= n; j++){
        cout<<"B["<<i<<","<<j<<"] = ";
        cin >> B[i][j];
      }
    }
 system("cls");
 //PROSES PERKALIAN
    for(i = 1; i <= n; i++){
      for(j = 1; j <= n; j++){
        for(k = 1; k <= n; k++){
          jumlah = jumlah + A[i][k] * B[k][j];
        }
        C[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout<<"Program Perkalian Matriks 3x3"<<endl;
    cout<<"By: RYAN RAMADHAN"<<endl;
    cout<<endl;

    cout << "Hasil perkalian matriks: \n";
    //MATRIKS A
    gotoxy(1,5);
    cout<<"A = ";
     for(i = 1; i <=n; i++){
      for(j = 1; j <=n; j++){
        gotoxy(2+4*j,2+2*i);
        cout << A[i][j];
      }
    }
    //MATRIKS B
    gotoxy(1,10);
    cout<<"B = ";
     for(i = 1; i <=n; i++){
      for(j = 1; j <=n; j++){
        gotoxy(2+4*j,7+2*i);
        cout << B[i][j];
      }
    }
    //MATRIKS C
    gotoxy(1,15);
    cout<<"C = ";
     for(i = 1; i <=n; i++){
      for(j = 1; j <=n; j++){
        gotoxy(2+4*j,12+2*i);
        cout << A[i][j] << "\t";
      }
    }

    gotoxy(16,16);
    cout<<" X ";
     for(i = 1; i <=n; i++){
      for(j = 1; j <=n; j++){
        gotoxy(17+4*j,12+2*i);
        cout << B[i][j] << "\t";
      }
    }
    gotoxy(33,16);
    cout<<" = ";
    for(i = 1; i <=n; i++){
      for(j = 1; j <=n; j++){
       gotoxy(35+4*j,12+2*i);
        cout << C[i][j] << "\t";
      }
    }

  }


