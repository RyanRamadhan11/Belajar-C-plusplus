//RYAN RAMADHAN
#include<iostream>
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
main()
{
    int n,i,j;
    matrik A,B,C;

    cout<<"Program Penjumlahan Matriks 3x3"<<endl;
    cout<<"By: RYAN RAMADHAN"<<endl;
    cout<<endl;

    n=3;
    //INPUT MATRIKS A
    cout<<"Masukan Nilai-Nilai Matrik A"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"A["<<i<<","<<j<<"] = ";
            cin>>A[i][j];
        }
    }
    system("cls");
     //INPUT MATRIKS B
    cout<<"Masukan Nilai-Nilai Matrik B"<<endl;
    cout<<"By: RYAN RAMADHAN"<<endl;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"A["<<i<<","<<j<<"] = ";
            cin>>B[i][j];
        }
    }
    system("cls");
    cout<<endl;
    //proses penjumlahan matrik C
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            C[i][j]= A[i][j]+B[i][j];
        }
    }
    system("cls");
    cout<<"Nilai-Nilai Matriks A,B, dan C"<<endl;
    cout<<"By: RYAN RAMADHAN"<<endl;
    cout<<endl;

    //Output Matriks A
    gotoxy(1,5);
    cout<<"A = ";
        for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            gotoxy(2+4*j,2+2*i);
            cout<<A[i][j];
        }
    }

    //Output Matriks B
    gotoxy(1,10);
    cout<<"B = ";
        for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            gotoxy(2+4*j,7+2*i);
            cout<<B[i][j];
            cout<<endl;
            cout<<endl;
        }
    }

    //Output Matriks C
    gotoxy(1,15);
    cout<<"C = ";
        for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            gotoxy(2+4*j,12+2*i);
            cout<<A [i][j];
        }
    }
     gotoxy(16,16);
    cout<<" + ";
        for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            gotoxy(17+4*j,12+2*i);
            cout<<B[i][j];
        }
    }
     gotoxy(33,16);
    cout<<" = ";
        for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            gotoxy(35+4*j,12+2*i);
            cout<<C[i][j];
        }
    }
}
