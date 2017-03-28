#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const int Size = 1024;

    int gigabytes; //Гигабайты
    int megabytes; //Мегабайты
    int kbytes; //Килобайты
    unsigned long long bytes; //Байты
	

    cout << "Enter amount gigabytes: "; //Вводим количество гигабайтов
    cin >> gigabytes; //Ввод числа в переменную
    
    megabytes = gigabytes * Size;
    kbytes = megabytes * Size;
    bytes = (unsigned long long)kbytes * (unsigned long long)Size;



    cout << "Gigabytes:\t" << gigabytes << endl;
    cout << "Megabytes:\t" << megabytes << endl;
    cout << "Kbytes:\t" << kbytes << endl;
    cout << "Bytes:\t" << bytes << endl; 

    _getch();
    return 0;
}