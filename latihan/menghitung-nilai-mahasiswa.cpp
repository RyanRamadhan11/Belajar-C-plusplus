//Ryan Ramadhan
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct nilai
{
    char nama[20];
    char npm[15];
    float tugas;
    float kuis;
    float uts;
    float uas;
};
struct hasil
{
    float tugas;
    float kuis;
    float uts;
    float uas;
    float akhir;
    char huruf;
};

main()
{
    nilai nl;
    hasil hsl;
    //Proses INPUT
    cout<<"-------------------------------------------------\n";
    cout<<"     Program Menghitung Nilai Akhir Mahasiswa\n";
    cout<<"                 By:Ryan Ramadhan\n";
    cout<<"-------------------------------------------------\n";
    cout<<endl;

    cout<<" Masukan Data Mahasiswa \n";
    cout<<"  Nama       : ";cin.getline(nl.nama,20);
    cout<<"  NPM        : ";cin.getline(nl.npm,15);
    cout<<"  Nilai Tugas: ";cin>>nl.tugas;
    cout<<"  Nilai Kuis : ";cin>>nl.kuis;
    cout<<"  Nilai UTS  : ";cin>>nl.uts;
    cout<<"  Nilai UAS  : ";cin>>nl.uas;
    cout<<"\n\n";
    // proses pengecekan inputan

    //Proses Hitung
    hsl.tugas = nl.tugas*10/100;
    hsl.kuis  = nl.kuis*20/100;
    hsl.uts   = nl.uts*30/100;
    hsl.uas   = nl.uas*40/100;
    hsl.akhir = hsl.tugas + hsl.kuis + hsl.uts + hsl.uas ;

    //Proses percabangan
    if (hsl.akhir >85)
    {
        hsl.huruf = 'A';
    }
    else if ( hsl.akhir >70)
    {
        hsl.huruf = 'B';
    }
    else if ( hsl.akhir >55)
    {
        hsl.huruf = 'C';
    }
    else if (hsl.akhir >40)
    {
        hsl.huruf = 'D';
    }
    else if ( hsl.akhir <=40 )
    {
        hsl.huruf = 'E';
    }

    //OUTPUT
    cout<<" Hasil Perhitungan Nilai \n";
    cout<<"  Nama           : "<<nl.nama<<endl;
    cout<<"  NPM            : "<<nl.npm<<endl;
    cout<<"  Nilai Tugas    : "<<nl.tugas<<endl;
    cout<<"  Nilai Kuis     : "<<nl.kuis<<endl;
    cout<<"  Nilai UTS      : "<<nl.uts<<endl;
    cout<<"  Nilai UAS      : "<<nl.uas<<endl;
    cout<<"  Nilai AKHIR    : "<<hsl.akhir<<endl;
    cout<<"  Nilai HURUF    : "<<hsl.huruf<<endl;


}


