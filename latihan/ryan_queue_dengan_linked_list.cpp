//Ryan Ramadhan 3H
//1910631170229
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define Nil NULL

struct node
{
    int data;
    struct node *link;
};

void insert (struct node **front, struct node **rear, int nilai)
{

    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

    //Buat Node Baru dengan Menggunakan Nilai Data sebagai parameter

    if (temp == Nil)
    {
        cout<<"Error, Memori Penuh"<<endl;
        exit(0);
    }

    temp -> data = nilai;
    temp -> link = Nil;

    if (*rear == Nil)
    {
        *rear = temp;
        *front = *rear;
    }

    else
    {
        (*rear) -> link = temp;
        *rear = temp;
    }
}

void del (struct node **front, struct node **rear, int *nilai)
{
    struct node *temp;

    if ((*front == *rear) && (*rear == Nil))
    {
        cout<<" Queue Kosong, Delete Tidak Dapat Dilakukan"<<endl;
        exit(0);
    }

    *nilai = (*front) -> data;
    temp = *front;
    *front = (*front) -> link;

    if(*rear == temp)
    *rear = (*rear) -> link;
    free (temp);
}

main()
{
    struct node *front = Nil, *rear = Nil;
    int n,nilai;

        cout<<" |----------------------------------------------|";cout<<endl;
        cout<<" | Program Queue dengan Menggunakan Linked List |";cout<<endl;
        cout<<" |               By : Ryan Ramadhan             |";cout<<endl;
        cout<<" |----------------------------------------------|";cout<<endl;

    do
    {
        do
        {
            cout<<" Masukkan Nilai Elemen : ";
            cin>>nilai;
            cout<<endl;
            insert(&front,&rear,nilai);
            cout<<" Tekan 1 untuk Melanjutkan : ";
            cin>>n;
        }   while (n == 1);

        cout<<endl;
        cout<<" Tekan 1 untuk Menghapus Elemen : ";
        cin>>n;

        while (n == 1)
        {
            del(&front,&rear,&nilai);
            cout<<endl;
            cout<<" Nilai yang Dihapus : "<<nilai<<endl;
            cout<<" Tekan 1 untuk Menghapus Elemen : ";
            cin>>n;
        }

        cout<<endl;
        cout<<" Tekan 1 untuk Melanjutkan : ";
        cin>>n;
    }   while (n == 1);
}
