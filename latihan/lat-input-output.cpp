//Ryan Ramadhan 1910631170229
#include <iostream>
#include <conio.h>
using namespace std;



main()
{
    int i,n;
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
}
