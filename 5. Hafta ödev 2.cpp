#include <iostream>
using namespace std;

int sayi;
void bolunuyormu_5(int sayi)
{
    int kalan=sayi%5;

    if(kalan==0)
    {
        cout<<"Tam bolunuyor";
    }
    else
    {
        cout<<"kalan: "<<kalan;
    }
}
int main()
{
    cout<<"Sayi giriniz:";cin>>sayi;
    bolunuyormu_5(sayi);
    return 0;
}
