



class Drone {
private:
    int yuk, hiz, yukseklik, pil;
public:
    Drone1(int y, int h, int yk, int p){
        yuk = y;
        hiz = h;
        yukseklik = yk;
        pil = p;
        cout <<"Drone oluþturuldu." << endl;
    }
    Drone2(int y, int h, int yk, int p){
        yuk = y;
        hiz = h;
        yukseklik = yk;
        pil = p;
        cout <<"Drone oluþturuldu." << endl;
    }
    Drone3(int y, int h, int yk, int p){
        yuk = y;
        hiz = h;
        yukseklik = yk;
        pil = p;
        cout <<"Drone oluþturuldu." << endl;
    }
    ~Drone() {
        cout << "Drone testi tamamlandi ve bellekten silindi." << endl;
    }

    string ucusGuvenligiKontrol1(){
        if (yuk > 10) return "Agir yük! Ucus reddedildi.";
        else if(pil < 30) return "Pil yetersiz.";
        else if (yukseklik < 500) return " Yukseklik sýnýrý asýldý!";
        else return "Drone1 ucusa hazir.";
    }
    string ucusGuvenligiKontrol2(){
        if (yuk > 10) return "Aðýr yük! Ucus reddedildi.";
        else if(pil < 30) return "Pil yetersiz.";
        else if (yukseklik < 500) return " Yukseklik sýnýrý asýldý!";
        else return "Drone2 ucusa hazir.";
    }
    string ucusGuvenligiKontrol3(){
        if (yuk > 10) return "Aðýr yük! Ucus reddedildi.";
        else if(pil < 30) return "Pil yetersiz.";
        else if (yukseklik < 500) return " Yukseklik sýnýrý asýldý!";
        else return "Drone3 ucusa hazir.";
    }
};
