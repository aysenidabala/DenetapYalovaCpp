C++ ANAHTAR KELİMELER

and
&& yerine kullanılabilen sözcük. “ve” anlamı: iki şart da doğruysa sonuç doğru olur.
Ör: if (a > 0 and b > 0)

auto
Değişkenin türünü derleyicinin otomatik bulmasını sağlar.
Ör: auto x = 5; // int

bool
“Doğru/yanlış” (true/false) tutar.
Ör: bool karar = true;

break
Döngüyü veya switch içindeki bir bölümü hemen bitirir.
Ör: break;

case
switch içinde durum (seçenek) belirtir.
Ör: case 3:

catch
Hataları (istisnaları) yakalayan blok. try ile kullanılır.
Ör: catch (std::exception& e) { }

char
Tek bir karakter tutar.
Ör: char harf = 'A';

class
Kendi türlerimizi (nesneleri) tanımlamak için şablon.
Ör: class Araba { };

concept (C++20)
Şablonlarda (template) kullanılacak türler için şart koyar.
Ör: template<typename T> requires std::integral<T>

const
“Değişmez” demektir. Değer sonradan değiştirilemez.
Ör: const int pi = 3;

continue
Döngünün bu turunu atlar, sonraki tura geçer.
Ör: continue;

default
switch içinde “hiçbiri uymadıysa” çalışacak kısım.
Ör: default:

delete
new ile ayrılan belleği geri verir.
Ör: delete p;

do
do…while döngüsünün başı. En az bir kez çalışır.
Ör: do { … } while(şart);

double
Ondalıklı sayı (float’tan daha hassas).
Ör: double sicaklik = 36.6;

else
if sağlanmazsa çalışacak bölüm.
Ör: else { … }

enum
Sabit değerlerin isimli listesi.
Ör: enum Renk { Kirmizi, Yesil, Mavi };

extern
Bir değişkenin başka dosyada tanımlı olduğunu söyler.
Ör: extern int sayi;

false
Mantıksal “yanlış” değeri.
Ör: bool ok = false;

float
Ondalıklı sayı türü.
Ör: float notOrt = 85.5f;

for
Belirli sayıda dönen döngü.
Ör: for (int i=0; i<10; i++)

friend
Bir sınıfa “özel erişim” izni verir (başka sınıfa/fonksiyona).
Ör: friend void yazdir(const Sinif&);

goto
Koda etikete atlayarak gider (kullanımı önerilmez).
Ör: goto Etiket;

if
Şart doğruysa çalışır.
Ör: if (puan >= 50)

int
Tam sayı türü.
Ör: int yas = 13;

long
Daha büyük tam sayı için niteleyici.
Ör: long sayi; veya long long sayi;

namespace
İsim çakışmalarını önlemek için isim alanı.
Ör: namespace okul { … }

new
Bellekten yer ayırır ve işaretçi döner.
Ör: int* p = new int;

not
! yerine kullanılabilen sözcük. “değil” anlamı.
Ör: if (not hazir)

operator
Operatör davranışını özelleştirme (aşırı yükleme).
Ör: operator+

or
|| yerine kullanılabilen sözcük. “veya” anlamı.
Ör: if (a==0 or b==0)

private
Sınıf içinde sadece içeriden erişilebilen üyeler.
Ör: private: int gizli;

protected
Sınıf ve ondan türeyenler erişebilir.
Ör: protected: int yarıGizli;

public
Herkesin erişebildiği üyeler.
Ör: public: void calis();

register (eski/önerilmez)
“CPU register’ında tut” önerisi (modern derleyiciler görmezden gelir).

return
Fonksiyondan çıkıp değer döndürür.
Ör: return 0;

short
Daha küçük tam sayı için niteleyici.
Ör: short kucuk;

signed
Pozitif/negatif değer alabilen tam sayı. (Varsayılan çoğu yerde budur.)
Ör: signed int s;

sizeof
Bir türün/değişkenin bayt cinsinden boyutu.
Ör: sizeof(int)

static

Dosya/fonksiyon içinde: ömür boyu saklanan değişken.

Sınıfta: sınıfın ortak üyesi.
Ör: static int sayac;

struct
class gibi; varsayılan erişim public olur.
Ör: struct Nokta { int x; int y; };

switch
Bir değere göre farklı case’lere dallanır.
Ör: switch (gun) { case 1: … }

template
Türden bağımsız (genel) kod yazmayı sağlar.
Ör: template<typename T> T kare(T x) { return x*x; }

this
Sınıfın içinden o anki nesneyi gösteren işaretçi.
Ör: this->uye

throw
Bir hatayı (istisnayı) fırlatır.
Ör: throw std::runtime_error("Hata");

true
Mantıksal “doğru” değeri.
Ör: bool aktif = true;

try
Hata oluşabilecek kodu dener; catch ile yakalanır.
Ör: try { … } catch (…) { … }

typedef
Varolan bir türe yeni isim verir. (Modern karşılığı: using)
Ör: typedef unsigned int uint;

union
Aynı belleği paylaşan farklı alanlar (aynı anda birini kullanırsın).
Ör: union Veri { int i; float f; };

unsigned
Negatif olmayan tam sayılar (0 ve pozitif).
Ör: unsigned int puan;

void

Fonksiyon değer döndürmüyor demek.

İşaretçi türü void* herhangi bir türü gösterebilir.
Ör: void yaz();

volatile
Değerin aniden değişebileceğini söyler (donanım/sinyal).
Ör: volatile int bayrak;

virtual
Türeyen sınıflarda yeniden yazılabilen fonksiyon (polimorfizm).
Ör: virtual void ciz();

while
Şart doğru olduğu sürece dönen döngü.
Ör: while (sayi > 0)# DenetapYalovaCpp
