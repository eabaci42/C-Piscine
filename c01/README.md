# <div align="center">📚 C01 Modülü</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=150&section=header&text=Pointerlar%20ve%20Fonksiyonlar&fontSize=35&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Pointerlar ve Fonksiyonlar" />
</div>

<p align="center">
  <img src="https://media.giphy.com/media/QNFhOolVeCzPQ2Mx85/giphy.gif" alt="Pointers" width="180" />
  <br>
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=Pointer'lar;Parametre+Ge%C3%A7i%C5%9Fi;Dizi+%C4%B0%C5%9Flemleri;Bellek+Y%C3%B6netimi" alt="Typing SVG" />
</p>

## 📋 Genel Bakış
Bu modül, C dilindeki pointer (işaretçi) kavramını ve fonksiyonların nasıl kullanılacağını öğretir. C01, bellek adreslerinin manipülasyonu ve değer geçişleri üzerine odaklanır.

## 📝 Alıştırmalar

### 📁 ex00: ft_ft
Bir pointer aracılığıyla bir integer değerini 42'ye değiştiren fonksiyon.
```c
void ft_ft(int *nbr);
```

### 📁 ex01: ft_ultimate_ft
Bir pointer'ın pointer'ının pointer'ının (...) pointer'ının değerini 42'ye değiştiren fonksiyon.
```c
void ft_ultimate_ft(int *********nbr);
```

### 📁 ex02: ft_swap
İki integer'ın değerlerini takas eden fonksiyon.
```c
void ft_swap(int *a, int *b);
```

### 📁 ex03: ft_div_mod
Bölme işleminin sonucunu ve kalanını hesaplayan fonksiyon.
```c
void ft_div_mod(int a, int b, int *div, int *mod);
```

### 📁 ex04: ft_ultimate_div_mod
Bölme işleminin sonucunu ve kalanını orijinal değişkenlerde saklayan fonksiyon.
```c
void ft_ultimate_div_mod(int *a, int *b);
```

### 📁 ex05: ft_putstr
Bir string'i yazdıran fonksiyon.
```c
void ft_putstr(char *str);
```

### 📁 ex06: ft_strlen
Bir string'in uzunluğunu hesaplayan fonksiyon.
```c
int ft_strlen(char *str);
```

### 📁 ex07: ft_rev_int_tab
Bir integer dizisini tersine çeviren fonksiyon.
```c
void ft_rev_int_tab(int *tab, int size);
```

### 📁 ex08: ft_sort_int_tab
Bir integer dizisini artan sırayla düzenleyen fonksiyon.
```c
void ft_sort_int_tab(int *tab, int size);
```

## 🧠 Öğrenilen Kavramlar
- Pointer (işaretçi) kavramı
- Adres operatörü (`&`) ve dereference operatörü (`*`)
- Fonksiyonlara parametre geçişi (değer ve referans ile)
- Dizilerle çalışma
- String (karakter dizisi) işlemleri
- Temel sıralama algoritmaları

## 💡 İpuçları
- Pointer'ların bellek adreslerini gösterdiğini unutmayın
- Fonksiyonlarda pointer kullanarak, birden fazla değeri değiştirebilirsiniz
- Dizilerin pointer olarak geçirildiğini anlayın
- String'lerin null-terminated karakter dizileri olduğunu hatırlayın
- Siralama algoritmasında bubble sort gibi basit bir yöntem kullanabilirsiniz

<div align="center">
  <h2>🚀 Başarılar!</h2>
  <img src="https://media.giphy.com/media/3oKIPnAiaMCws8nOsE/giphy.gif" alt="Keep Coding" width="200" />
</div>

<div align="center">
  <a href="../README.md">
    <img src="https://img.shields.io/badge/Ana%20Sayfa-0891b2?style=for-the-badge" alt="Ana Sayfa" />
  </a>
</div> 