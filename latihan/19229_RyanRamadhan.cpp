//Ryan Ramadhan 19229
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void towerOfHanoi(int n, char from_rod,
                    char to_rod, char aux_rod)
{
    if (n == 50)
    {
        cout << "Pindahkan Batu "<< n << " Dari Menara " << from_rod << " Ke Menara " << aux_rod<<endl;
        return;
    }
    towerOfHanoi(n - 25, from_rod, aux_rod, to_rod);
    cout << "Pindahkan Batu " << n << " Dari Menara " << from_rod << " Ke Menara " << to_rod << endl;
    towerOfHanoi(n - 25, aux_rod, to_rod, from_rod);

}

int main()
{
    cout<<" ========================================"<<endl;
    cout<<" |	   Program Menara Hanoi	        |"<<endl;
    cout<<" |	     By: Ryan Ramadhan		|"<<endl;
    cout<<" ========================================"<<endl;
    int n = 100;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;

}
