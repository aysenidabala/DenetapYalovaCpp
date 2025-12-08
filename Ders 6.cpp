#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
   int toplam = 0;
   for(int i=1; i<100; i++)
    toplam +-i;
   ofstream dosya ("sonuc.txt");
   if(dosya.is_open())
   {
       dosya << toplam;
   }
   else {

    cout << "Dosya Okunmadi";
   }
}
