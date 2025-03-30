# <div align="center">📚 C03 Modülü</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=150&section=header&text=%C4%B0leri%20String%20%C4%B0%C5%9Flemleri&fontSize=35&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="İleri String İşlemleri" />
</div>

<p align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="String Functions" width="180" />
  <br>
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=String+Kar%C5%9F%C4%B1la%C5%9Ft%C4%B1rma;String+Birle%C5%9Ftirme;String+Arama;Bellek+Operasyonlar%C4%B1" alt="Typing SVG" />
</p>

## 📋 Genel Bakış
Bu modül, C dilindeki karakter dizileri (string) üzerinde daha ileri düzey işlemleri içerir. String karşılaştırma, birleştirme ve bellek yönetimi konularına odaklanır.

## 📝 Alıştırmalar

### 📁 ex00: ft_strcmp
İki string'i karşılaştıran fonksiyon.
```c
int ft_strcmp(char *s1, char *s2);
```

### 📁 ex01: ft_strncmp
İki string'i belirtilen karakter sayısına kadar karşılaştıran fonksiyon.
```c
int ft_strncmp(char *s1, char *s2, unsigned int n);
```

### 📁 ex02: ft_strcat
İki string'i birleştiren fonksiyon.
```c
char *ft_strcat(char *dest, char *src);
```

### 📁 ex03: ft_strncat
Belirtilen karakter sayısı kadar bir string'i diğerine ekleyen fonksiyon.
```c
char *ft_strncat(char *dest, char *src, unsigned int nb);
```

### 📁 ex04: ft_strstr
Bir string içinde bir alt string arayan fonksiyon.
```c
char *ft_strstr(char *str, char *to_find);
```

### 📁 ex05: ft_strlcat
Güvenli string birleştirme fonksiyonu, taşmaları önler.
```c
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
```

## 🧠 Öğrenilen Kavramlar
- String karşılaştırma metodolojisi
- Farklı string birleştirme teknikleri
- Güvenli bellek işlemleri
- Alt string arama algoritmaları
- Bellek taşması kontrolü

## 💡 İpuçları
- String karşılaştırmada her zaman karakterlerin ASCII değerlerine bakılır
- String birleştirmede hedef dizinin yeterli büyüklükte olduğundan emin olun
- `\0` (null terminator) karakterini string sonuna eklemeyi unutmayın
- `strstr` fonksiyonunda iki pointer kullanarak verimli arama yapın
- Buffer overflow'u önlemek için her zaman boyut kontrolü yapın

<div align="center">
  <h2>🚀 Başarılar!</h2>
  <img src="https://media.giphy.com/media/JQl8H6vasLE1YiVMkJ/giphy.gif" alt="Advanced String Operations" width="200" />
</div>

<div align="center">
  <a href="../README.md">
    <img src="https://img.shields.io/badge/Ana%20Sayfa-0891b2?style=for-the-badge" alt="Ana Sayfa" />
  </a>
</div> 