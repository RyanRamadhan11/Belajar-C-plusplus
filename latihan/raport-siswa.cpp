//Ryan Ramadhan
//1910631170229
//3H
#include <iostream>
#include <conio.h>

using namespace std;

struct nilai
{
    char nama[30];
    char nis[10];
    int inggris;
    int mtk;
    int indo;
    int fisika;
    int kimia;
    int biologi;
};
struct hasil
{
    int inggris;
    int indo;
    int mtk;
    int fisika;
    int kimia;
    int biologi;
    double rata;
    string ket;
};

main()
{
    nilai nl;
    hasil hsl;

    //Proses INPUT
    cout<<"-------------------------------------------------\n";
    cout<<"|            Program Raport Siswa Online        |\n";
    cout<<"|                 By: Ryan Ramadhan             |\n";
    cout<<"-------------------------------------------------\n";
    cout<<endl;

    cout<<" Silahkan Masukan Data Siswa \n";
    cout<<"  Nama Siswa             : ";cin.getline(nl.nama,20);
    cout<<"  NIS                    : ";cin.getline(nl.nis,15);
    cout<<"  Nilai Bahasa Inggris   : ";cin>>nl.inggris;
    cout<<"  Nilai Matematika       : ";cin>>nl.mtk;
    cout<<"  Nilai Bahasa Indonesia : ";cin>>nl.indo;
    cout<<"  Nilai Fisika           : ";cin>>nl.fisika;
    cout<<"  Nilai Kimia            : ";cin>>nl.kimia;
    cout<<"  Nilai Biologi          : ";cin>>nl.biologi;
    cout<<"\n\n";
    // proses pengecekan inputan

    //Proses Hitung
    hsl.inggris = nl.inggris;
    hsl.mtk     = nl.mtk;
    hsl.indo    = nl.indo;
    hsl.fisika  = nl.fisika;
    hsl.biologi = nl.biologi;
    hsl.kimia   = nl.kimia;
    hsl.rata    = double (hsl.inggris + hsl.mtk + hsl.indo + hsl.fisika + hsl.biologi + hsl.kimia)/6;

    //Proses Seleksi Kondisi
    if (hsl.rata <=100 && hsl.rata>=81)
    {
        hsl.ket = "Sangat Baik";
    }
    else if ( hsl.rata <=80 && hsl.rata>=61)
    {
        hsl.ket = "Cukup";
    }
    else if ( hsl.rata <61)
    {
        hsl. ket = "Kurang";
    }

    //OUTPUT
    cout<<" Hasil Perhitungan Nilai \n";
    cout<<"  Nama Siswa                  : "<<nl.nama<<endl;
    cout<<"  NIS                         : "<<nl.nis<<endl;
    cout<<"  Nilai Bahasa Inggris        : "<<hsl.inggris<<endl;
    cout<<"  Nilai Matematika            : "<<hsl.mtk<<endl;
    cout<<"  Nilai Bahasa Indonesia      : "<<hsl.indo<<endl;
    cout<<"  Nilai Fisika                : "<<hsl.fisika <<endl;
    cout<<"  Nilai Kimia                 : "<<hsl.kimia<<endl;
    cout<<"  Nilai Biologi               : "<<hsl.biologi<<endl;
    cout<<"  Nilai Rata-Rata             : "<<hsl.rata<<endl;
    cout<<"  Keterangan Nilai            : "<<hsl.ket<<endl;

}


