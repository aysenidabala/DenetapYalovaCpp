# C++ Anahtar Kelimeler – Ortaokul Düzeyi 

Bu depo, C++’ta sık kullanılan **anahtar kelimeleri** basit ve örnekli şekilde anlatır.

## İçindekiler

* [A](#a)
* [B](#b)
* [C](#c)
* [D](#d)
* [E](#e)
* [F](#f)
* [G](#g)
* [H](#h)
* [I](#i)
* [L](#l)
* [N](#n)
* [O](#o)
* [P](#p)
* [R](#r)
* [S](#s)
* [T](#t)
* [U](#u)
* [V](#v)
* [W](#w)

---

## A

### `and`

**Anlam:** “ve” (mantıksal `&&`). İki şart da doğru olursa geçer.
**Örnek:** `if (a > 0 and b > 0) { /*...*/ }`

### `auto`

**Anlam:** Türü otomatik çıkar.
**Örnek:** `auto x = 5; // int`

---

## B

### `bool`

**Anlam:** Doğru/yanlış tutar (`true`/`false`).
**Örnek:** `bool aktif = true;`

### `break`

**Anlam:** Döngüyü veya `switch` kolunu hemen bitirir.
**Örnek:** `for (int i=0;i<10;i++){ if(i==5) break; }`

---

## C

### `case`

**Anlam:** `switch` içinde seçenek.
**Örnek:** `switch (gun) { case 1: /*Pzt*/ break; }`

### `catch`

**Anlam:** Hataları yakalar (`try` ile).
**Örnek:**

```cpp
try { /* riskli kod */ }
catch (const std::exception& e) { /* hata işle */ }
```

### `char`

**Anlam:** Tek karakter.
**Örnek:** `char harf = 'A';`

### `class`

**Anlam:** Kendi tipimizi tanımlar (nesne).
**Örnek:**

```cpp
class Araba { public: void sur(){ } };
```

### `concept` *(C++20)*

**Anlam:** Şablonlarda tür şartı koyar.
**Örnek:** `template<typename T> requires std::integral<T> T ikiKat(T x){return 2*x;}`

### `const`

**Anlam:** Değiştirilemez.
**Örnek:** `const int pi = 3;`

### `continue`

**Anlam:** Döngünün bu turunu atla.
**Örnek:** `if(i%2==0) continue;`

---

## D

### `default`

**Anlam:** `switch` içinde “hiçbiri uymadıysa”.
**Örnek:** `default: /*...*/`

### `delete`

**Anlam:** `new` ile ayrılan belleği geri ver.
**Örnek:** `int* p = new int; delete p;`

### `do`

**Anlam:** `do-while` başı; en az 1 kez çalışır.
**Örnek:**

```cpp
int i=0;
do { i++; } while(i<3);
```

### `double`

**Anlam:** Ondalıklı sayı (float’tan hassas).
**Örnek:** `double t = 36.6;`

---

## E

### `else`

**Anlam:** `if` olmazsa çalışır.
**Örnek:** `if(puan>=50) ; else ;`

### `enum`

**Anlam:** İsimli sabitler listesi.
**Örnek:** `enum Renk{Kirmizi,Yesil,Mavi};`

### `extern`

**Anlam:** Değişken başka dosyada tanımlı.
**Örnek:** `extern int sayi;`

---

## F

### `false`

**Anlam:** Mantıksal yanlış.
**Örnek:** `bool ok = false;`

### `float`

**Anlam:** Ondalıklı sayı türü.
**Örnek:** `float ort = 85.5f;`

### `for`

**Anlam:** Sayaçlı döngü.
**Örnek:** `for(int i=0;i<10;i++){}`

### `friend`

**Anlam:** Başka sınıf/fonksiyona özel erişim izni.
**Örnek:** `friend void yaz(const S&);`

---

## G

### `goto` *(önerilmez)*

**Anlam:** Etikete zıplar, kodu karmaşıklaştırır.
**Örnek:** `goto Etiket; /*...*/ Etiket: ;`

---

## H

### `if`

**Anlam:** Şart doğruysa çalışır.
**Örnek:** `if(sicaklik>30){ /* klima */ }`

---

## I

### `int`

**Anlam:** Tam sayı.
**Örnek:** `int yas = 13;`

---

## L

### `long`

**Anlam:** Daha büyük tam sayı.
**Örnek:** `long sayi; // veya long long`

---

## N

### `namespace`

**Anlam:** İsim çakışmasını önler.
**Örnek:** `namespace okul { int puan; }`

### `new`

**Anlam:** Bellekten yer ayırır (işaretçi döner).
**Örnek:** `int* p = new int(42);`

### `not`

**Anlam:** Mantıksal “değil” (`!`).
**Örnek:** `if (not hazir) { /* bekle */ }`

---

## O

### `operator`

**Anlam:** Operatörleri özelleştir (aşırı yükleme).
**Örnek:**

```cpp
struct V { int x; V operator+(const V& d)const{ return {x+d.x}; } };
```

### `or`

**Anlam:** “veya” (`||`).
**Örnek:** `if(a==0 or b==0){ /*...*/ }`

---

## P

### `private`

**Anlam:** Sadece sınıf içinden erişilir.
**Örnek:** `private: int gizli;`

### `protected`

**Anlam:** Sınıf + ondan türeyenler erişir.
**Örnek:** `protected: int yariGizli;`

### `public`

**Anlam:** Her yerden erişilir.
**Örnek:** `public: void calis();`

---

## R

### `register` *(tarihsel/eskidi)*

**Anlam:** “Hız için register’da tut” önerisi; modern derleyiciler yok sayabilir.

### `return`

**Anlam:** Fonksiyondan çıkıp değer döndür.
**Örnek:** `return 0;`

---

## S

### `short`

**Anlam:** Daha küçük tam sayı.
**Örnek:** `short k = 100;`

### `signed`

**Anlam:** Pozitif/negatif alabilen tam sayı (çoğu yerde varsayılan).
**Örnek:** `signed int s = -5;`

### `sizeof`

**Anlam:** Türün/değişkenin bayt cinsinden boyutu.
**Örnek:** `auto b = sizeof(int);`

### `static`

**Anlam (özet):**

* **Yerel değişken:** Program boyunca saklanır.
* **Sınıf üyesi:** Tüm nesneler için ortaktır.
  **Örnek:**

```cpp
void say(){ static int s=0; s++; }
struct C{ static int adet; };
```

### `struct`

**Anlam:** `class` gibidir; varsayılan erişim `public`.
**Örnek:** `struct Nokta{ int x; int y; };`

### `switch`

**Anlam:** Tek değere göre dallanma.
**Örnek:**

```cpp
switch(notu){
  case 5: /* Pekiyi */ break;
  default: /* Diğerleri */
}
```

---

## T

### `template`

**Anlam:** Türden bağımsız (genel) kod.
**Örnek:** `template<typename T> T kare(T x){ return x*x; }`

### `this`

**Anlam:** O anki nesneyi gösteren işaretçi.
**Örnek:** `this->puan = 100;`

### `throw`

**Anlam:** Hata fırlat.
**Örnek:** `throw std::runtime_error("Hata");`

### `true`

**Anlam:** Mantıksal doğru.
**Örnek:** `bool acik = true;`

### `try`

**Anlam:** Hata oluşabilir kodu dener.
**Örnek:** `try { /*...*/ } catch(...) { /*...*/ }`

### `typedef`

**Anlam:** Var olan türe yeni isim. (`using` önerilir)
**Örnek:** `typedef unsigned int uint;`

---

## U

### `union`

**Anlam:** Aynı belleği paylaşan alanlar (aynı anda biri geçerli).
**Örnek:** `union Veri{ int i; float f; };`

### `unsigned`

**Anlam:** Negatif olmayan tam sayılar.
**Örnek:** `unsigned int puan = 0;`

---

## V

### `void`

**Anlam:** Fonksiyon değer döndürmez; `void*` türsüz işaretçi.
**Örnek:** `void yaz(){ /*...*/ }`

### `volatile`

**Anlam:** Değeri aniden değişebilir (donanım/sinyal).
**Örnek:** `volatile int bayrak;`

### `virtual`

**Anlam:** Türeyen sınıflarca yeniden yazılabilir (çok biçimlilik).
**Örnek:**

```cpp
struct Sekil{ virtual void ciz(){} };
struct Daire: Sekil{ void ciz() override{} };
```

---

## W

### `while`

**Anlam:** Şart doğru olduğu sürece döner.
**Örnek:** `while (sayi > 0) { sayi--; }`

---

## Hızlı Notlar

* `and/or/not` yerine `&&/||/!` yazılabilir; aynıdır.
* `typedef` için modern tercih: `using Yeni = Eski;`
* `register` tarihsel bir kelime; modern C++’ta etkisi yok.
* `extern` genelde çok dosyalı projelerde kullanılır.
* Bellek yönetiminde **`new/delete`** yerine **akıllı işaretçiler** (`std::unique_ptr`) önerilir.

---

## Lisans

MIT

---

İstersen README’nin başına görsel/rozet ekleyeyim veya bu içeriği **tek sayfalık PDF poster** olarak da hazırlayabilirim.
