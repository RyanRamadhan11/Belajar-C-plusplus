//Ryan Ramadhan
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct time
{
    char user[20];
    long int jam;
    long int menit;
    long int detik;
};

struct total
{
    long int jam;
    long int menit;
    long int detik;
    long int all;
};

main()
{
    time tm;
    total tot;
    cout<<"====================PROGRAM MENGHITUNG BILING WARNET==================="<<endl<<endl;
    cout<<"========================(30 detik = Rp.130)============================"<<endl<<endl;
    cout<<"==========================By:Ryan Ramadhan============================="<<endl<<endl;
    cout<<" Masukkan Nama USER   : ";cin.getline(tm.user,20);
    cout<<endl;

    cout<<" Masukkan Waktu Menggunakan PC \n";
    cout<<"  Masukan Total Jam         : ";cin>>tm .jam;
    cout<<"  Masukan Total Menit (<60) : ";cin>>tm.menit;
    cout<<"  Masukkan Total Detik (<60): ";cin>>tm.detik;

    tot.jam=tm.jam*120*130;
    tot.menit=tm.menit*260;
    tot.detik=tm.detik*130/30;
    tot.all=tot.jam+tot.menit+tot.detik;

    cout<<" User "<<tm.user;
    cout<<" Harus Membayar Sebesar :   Rp. ";
    cout<<tot.all<<endl<<endl;

}
