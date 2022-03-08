//Ryan Ramadhan 3H
//19229
#include <iostream>
#include <conio.h>
#include <malloc.h>

#define Nil NULL

using namespace std;

struct nod
{
    struct nod * left;
    char data;
    struct nod * right;
};

typedef struct nod NOD;
typedef NOD POKOK;

NOD *NodBaru (char item)
{
    NOD *n;

    n = (NOD *)malloc(sizeof(NOD));

    if (n != Nil)
    {
        n -> data = item;
        n -> left = Nil;
        n -> right = Nil;
    }
    return n;
}

void BinaPokok (POKOK **T)
{
    *T = Nil;
}

typedef enum {FALSE = 0, TRUE = 1} BOOL;

BOOL PokokKosong (POKOK *T)
{
    return ((BOOL) (T == Nil));
}

void TambahNod (NOD **p, char item)
{
    NOD *n;

    n = NodBaru(item);

    *p = n;
}

void preOrder (POKOK *T)
{
    if (!PokokKosong(T))
    {
        cout<<" "<< T -> data;
        preOrder(T -> left);
        preOrder(T -> right);
    }
}

void inOrder(POKOK *T)
{
    if (!PokokKosong(T))
    {
        inOrder(T -> left);
        cout<<" "<< T -> data;
        inOrder(T -> right);
    }
}

void postOrder(POKOK *T)
{
    if (!PokokKosong(T))
    {
        postOrder(T -> left);
        postOrder(T -> right);
        cout<<" "<< T -> data;
    }
}

int main()
{
    POKOK *kelapa;
    char buah;

    BinaPokok(&kelapa);
    TambahNod(&kelapa, buah = 'M');
    TambahNod(&kelapa -> left, buah = 'E');
    TambahNod(&kelapa -> left -> right, buah = 'I');
    TambahNod(&kelapa -> right, buah = 'L');
    TambahNod(&kelapa -> right -> right, buah = 'O');
    TambahNod(&kelapa -> right -> right -> left, buah = 'D');

    cout<<" Tampilan secara PreOrder : ";
    preOrder(kelapa);

    cout<<endl;
    cout<<" Tampilan secara InOrder : ";
    inOrder(kelapa);

    cout<<endl;
    cout<<" Tampilan secara PostOrder : ";
    postOrder(kelapa);

    cout<<endl;
    cout<<endl;

    return 0;
}
