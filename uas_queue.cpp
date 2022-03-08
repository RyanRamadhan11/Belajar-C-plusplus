//Ryan Ramadhan 3H
//1910631170229
#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int maxim = 25;
string data [40];
int penunjuk = -1;

//membuat fungsi IsEmpty untuk mengecek queue kosong atau tidak
bool IsEmpty()
{
  if(penunjuk == -1)
    return true;
  else
    return false;
}

//membuat fungsi IsFull untuk mengecek queue terisi atau tidak
bool IsFull()
{
  if(penunjuk == maxim-1)
    return true;
  else
    return false;
}

//membuat fungsi enqueue untuk memasukkan nilai
void enqueue()
{
  if(IsFull())
    {
        cout<<" Data Sudah Penuh!";
        getch();
    }
  else
    {
        penunjuk++;
        cout<<" Data Yang Akan Di Masukkan = ";
        cin>>data[penunjuk];
        cin.ignore();
    }

}

//membuat fungsi dequeue untuk mengambil nilai
void dequeue()
{
  if (IsEmpty())
    {
        cout<<" Data kosong!";
        getch();
    }
  else
    {
        cout<<" Data Berhasil Di Pop : "<<data[0];
        penunjuk--;
        for(int x=0;x<=penunjuk;x++)
    {
        data[x]=data[x+1];
    }
  getch();
 }
}

//membuat fungsi untuk menampilkan isi data
void view()
{
  if (!IsEmpty())
    {
     for(int a=penunjuk;a>=0;a--)
      {
        cout<<" Tumpukan ke-"<<a<<" : "<<data[a]<<endl;
      }
    }
  else
    {
        cout<<" - QUEUE KOSONG -";
    }
}

//fungsi utama
main()
{
   int jawab;

   do
   {
    system ("cls");
    cout<<endl;
    cout<<" Isi QUEUE Saat Ini:"<<endl<<endl;
     view();
    cout<<endl<<endl<<endl<<endl;

    cout<<"------------------------------------------------------\n";
    cout<<"============= P R O G R A M  Q U E U E ===============\n";
    cout<<"=============    By : Ryan Ramadhan    ===============\n";
    cout<<"------------------------------------------------------\n";
    cout<<"|   1. Enqueue (Push)                                |\n";
    cout<<"|   2. Dequeue (Pop)                                 |\n";
    cout<<"|   3. Exit Program                                  |\n";
    cout<<"======================================================\n";
    cout<<"  Masukkan pilihan Anda [ 1/2/3 ] = ";
    cin>>jawab;

     switch(jawab)
      {
        case 1:
            int limit;
            cout<<" Masukkan Jumlah Data = ";
            cin>>limit;
        for(int a=1; a<=limit; a++)
        {
          enqueue();
        }
        break;

        case 2:
          dequeue();
        break;

      }
   }
   while (jawab !=3);
}

