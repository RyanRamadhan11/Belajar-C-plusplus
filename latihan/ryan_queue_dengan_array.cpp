//Ryan Ramadhan 3H
//1910631170229
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define MAX 10 //ukuran maksimum Queue

void insert (int queue[], int *rear, int nilai);
void del (int queue[], int *front, int rear, int *nilai);

main()
{
    int queue [MAX];
    int front, rear;
    int n, nilai;

        cout<<" |----------------------------------------|";cout<<endl;
        cout<<" | Program Queue dengan Menggunakan Array |";cout<<endl;
        cout<<" |          By : Ryan Ramadhan            |";cout<<endl;
        cout<<" |----------------------------------------|";cout<<endl;

    front = rear = (-1);
    do
    {
        do
        {
            cout<<" Masukkan Nilai Elemen : ";
            cin>>nilai;
            insert (queue,&rear,nilai);

            cout<<endl;
            cout<<" Tekan 1 untuk Melanjutkan : ";
            cin>>n;
        }   while (n == 1);

        cout<<endl;
        cout<<" Tekan 1 untuk Menghapus Sebuah Elemen : ";
        cin>>n;

        while (n == 1)
        {
            del(queue,&front,rear,&nilai);
            cout<<" NIlai telah Dihapus : "<<nilai<<endl;
            cout<<endl;
            cout<<" Tekan 1 untuk Menghapus Sebuah Elemen : ";
            cin>>n;
        }

        cout<<endl;
        cout<<" Tekan 1 untuk Melanjutkan : ";
        cin>>n;
    } while (n == 1);
}

void insert (int queue[], int *rear, int nilai)
{
    if (*rear < MAX-1)
    {
        *rear = *rear + 1;
        queue[*rear] = nilai;
    }
    else
    {
        cout<<" Queue Penuh, Insert Tidak Dapat Dilakukan"<<endl;
        exit(0);
    }
}

void del (int queue[], int *front, int rear, int *nilai)
{
    if (*front == rear)
    {
        cout<<" Queue Kosong, Delete Tidak Dapat Dilakukan"<<endl;
        exit(0);
    }

    *front = *front + 1;
    *nilai = queue[*front];
}
