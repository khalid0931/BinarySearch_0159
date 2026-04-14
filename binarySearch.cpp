#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input ()
{
    while (true)
    {
        cout << "Masukan banyaknya element pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[i] jumlah element tidak boleh lebih dari sepuluh,silahkan coba lagi.\n";
        }
    }
}

cout << "\n===================================\n";
cout << "          Masukan Element Array      \n";
cout << " ====================================\n";

for (int i = 0; i < nPanjang i++)
{
    cout << "Data ke-" << i + 1 << " = ";
    cin >> element[i];
}



















void display()
{
    cout << "\n==========================\n";
    cout << " Element Array Setelah Diurutkan (Asc)\n"
}







