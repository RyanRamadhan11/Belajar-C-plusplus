//Ryan Ramadhan 1910631170229
#include <iostream>
#include <conio.h>
using namespace std;



main()
{
    int i,n,src;
    int jumlah = 0;
    bool ketemu =false;
    int data[20];
    cout<<"Masukan Jumlah data: "; cin >> n;
    //INPUT
    for(i=0;i<n;i++)
    {
        cout<<"masukan data ke"<<i<<" :";cin >> data[i];
    }
    cout<<endl;
    //OUTPUT
    for(i=0;i<n;i++)
    {
        cout<<"data ke"<<i<<" :"<<data[i]<<endl;;
    }
    //PENCARIAN DATA
    cout<<"Masukan Data yang akan anda cari :"; cin >> src;
    for(i=0;i<n;i++)
    {
        if(data[i]==src)
        {
            ketemu = true;
            cout<<"Data ditemukan pada elemen ke " <<i<<endl;
            jumlah++;
        }

    }
    if (ketemu)
    {
        cout<<"Jumlah data adalah : "<<jumlah<<endl;
    }
    else
    {
        cout<<"data tidak ditemukan"<<endl;
    }
}
