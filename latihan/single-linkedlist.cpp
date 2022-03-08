//RYAN RAMADHAN
#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>

using namespace std;

#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define First(L) (L)

typedef int InfoType;
typedef struct telmtlist *address;
typedef struct telmtlist
{
    InfoType info;
    address next;
}elmtlist;

typedef address list;
void CiptaSenarai(list *L)
{
    First(*L) = Nil;
}

list NodBaru(int m)
{
    list n;
    n = (list) malloc(sizeof(elmtlist));
    if (n != NULL)
    {
        info(n) = m;
        next(n)= Nil;
    }
    return n;
}

void SisipSenarai (list *L,list t,list p)
{
    if(p == Nil)
    {
        t->next = *L;
        *L = t;
    }
    else
    {
        t->next = p-> next;
        p->next =t;
    }
}

void CetakSenarai (list L)
{
    list ps;
    for (ps=L; ps!=Nil; ps=ps->next)
    {
        cout<<" "<<info(ps)<<" -->";
    }
    cout<<" NULL "<<endl;

}

int main()
{
    list pel;
    list n;
    int i,k,nilai;

    CiptaSenarai(&pel);
    cout<<" Membuat Single Linked List"<<endl;
    cout<<"    By : Ryan Ramadhan"<<endl<<endl;
    cout<<"Masukkan Banyak Data = ";
    cin>>k;
    for (i=1; i<=k; i++)
    {
        cout<<"Masukkan Data Senarai Ke-"<<i<<" = ";
        cin>>nilai;
        n = NodBaru(nilai);
        SisipSenarai(&pel, n,NULL);
    }
    CetakSenarai(pel);
    return 0;
}
