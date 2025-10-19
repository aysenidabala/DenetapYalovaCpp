#include <iostream>

using namespace std;

int sayi1, sayi2;

int kucukmu(int sayi1, int sayi2)
{
    int kucuk;

    if(sayi1<sayi2)
    {
        kucuk=sayi1;
    }
    else
    {
        kucuk=sayi2;
    }
    return kucuk;
}
int main()
{
    cout<<"1. Sayiyi giriniz:";cin>>sayi1;
    cout<<"2. Sayiyi giriniz:";cin>>sayi2;
    cout<<"Kucuk sayi:" <<kucukmu(sayi1,sayi2);

    return 0;
}

