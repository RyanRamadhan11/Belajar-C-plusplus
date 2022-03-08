//Ryan Ramadhan 3H
//1910631170229
#include <iostream>
#include <malloc.h>
#include <string>

#define Nil NULL

using namespace std;

struct NOD
{
	struct NOD* left;
	char data;
	struct NOD* right;
};

typedef NOD Root;
NOD* NodBaru(char item);
void InitRoot(Root** T);
bool IsEmpty(Root* T);
void preOrder(Root* T);
void inOrder(Root* T);
void postOrder(Root* T);
void inputChar(Root** T, char c);

int main ()
{
	Root* pohon;
	string nama;

	InitRoot(&pohon);

    cout<<"------------------------------------------------------\n";
    cout<<"=============  P R O G R A M  T R E E  ===============\n";
    cout<<"=============    By : Ryan Ramadhan    ===============\n";
    cout<<"------------------------------------------------------\n";
	cout << " Masukan Nama Tanpa Duplikat Karakter : ";
	getline(cin, nama);

	for (int i = 0; i < nama.length(); i++)
      {
		inputChar(&pohon, nama[i]);
	  }

	cout << " Tampilan secara PreOrder : ";
	preOrder(pohon);
	cout << endl;

	cout << " Tampilan secara InOrder : ";
	inOrder(pohon);
	cout << endl;

	cout << " Tampilan secara PostOrder : ";
	postOrder(pohon);
	cout << endl;
	cout << endl;
}

NOD* NodBaru(char item)
{
	NOD* n;
	n = (NOD*)malloc(sizeof(NOD));
	if (n != Nil)
    {
		n->data = item;
		n->left = Nil;
		n->right = Nil;
	}
	return n;
}

void InitRoot(Root** T)
{
	*T = Nil;
}

bool IsEmpty(Root* T)
{
	return((bool)(T == Nil));
}

void inputChar(Root** T, char c)
{
	Root* tmp = *T;
	while (!IsEmpty(tmp))
    {
		if (tmp->data == c)
          {
			cout << " Karakter '" << c << "' duplikasi! " << endl;
			return;
		  }
        else if (c < tmp->data)
		  {
			if (tmp->left == Nil)
            {
				tmp->left = NodBaru(c);
				return;
			}else
				tmp = tmp->left;
          }
        else
          {
			if (tmp->right == Nil)
			  {
				tmp->right = NodBaru(c);
					return;
			  }
			  else
				tmp = tmp->right;
          }
	}
	*T = NodBaru(c);
}

void preOrder(Root* T)
{
	if (!IsEmpty(T))
    {
		cout << " " << T->data;
		preOrder(T->left);
		preOrder(T->right);
	}
}

void inOrder(Root* T)
{
	if (!IsEmpty(T))
    {
		inOrder(T->left);
		cout << " " << T->data;
		inOrder(T->right);
	}
}

void postOrder(Root* T)
{
	if (!IsEmpty(T))
    {
		postOrder(T->left);
		postOrder(T->right);
		cout << " " << T->data;
	}
}
