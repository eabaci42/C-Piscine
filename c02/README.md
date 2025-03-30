# <div align="center">📚 C02 Modülü</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=150&section=header&text=String%20%C4%B0%C5%9Flemleri&fontSize=40&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="String İşlemleri" />
</div>

<p align="center">
  <img src="https://media.giphy.com/media/l3vR85PnGsBwu1PFK/giphy.gif" alt="String Manipulation" width="180" />
  <br>
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=Karakter+Dizileri;String+Manipulasyonlar%C4%B1;Bellek+Kopyalama;Karakter+S%C4%B1n%C4%B1flamalar%C4%B1" alt="Typing SVG" />
</p>

## 📋 Genel Bakış
Bu modül, C dilindeki string (karakter dizisi) işlemlerine odaklanır. String kopyalama, karakter kontrolleri ve bellek manipülasyonu gibi önemli string operasyonlarını içerir.

## 📝 Alıştırmalar

### 📁 ex00: ft_strcpy
Bir string'i başka bir string'e kopyalayan fonksiyon.
```c
char *ft_strcpy(char *dest, char *src);
```

### 📁 ex01: ft_strncpy
Belirtilen sayıda karakteri bir string'den diğerine kopyalayan fonksiyon.
```c
char *ft_strncpy(char *dest, char *src, unsigned int n);
```

### 📁 ex02: ft_str_is_alpha
Bir string'in sadece alfabetik karakterlerden oluşup oluşmadığını kontrol eden fonksiyon.
```c
int ft_str_is_alpha(char *str);
```

### 📁 ex03: ft_str_is_numeric
Bir string'in sadece rakamlardan oluşup oluşmadığını kontrol eden fonksiyon.
```c
int ft_str_is_numeric(char *str);
```

### 📁 ex04: ft_str_is_lowercase
Bir string'in sadece küçük harflerden oluşup oluşmadığını kontrol eden fonksiyon.
```c
int ft_str_is_lowercase(char *str);
```

### 📁 ex05: ft_str_is_uppercase
Bir string'in sadece büyük harflerden oluşup oluşmadığını kontrol eden fonksiyon.
```c
int ft_str_is_uppercase(char *str);
```

### 📁 ex06: ft_str_is_printable
Bir string'in sadece yazdırılabilir karakterlerden oluşup oluşmadığını kontrol eden fonksiyon.
```c
int ft_str_is_printable(char *str);
```

### 📁 ex07: ft_strupcase
Bir string'deki tüm küçük harfleri büyük harfe çeviren fonksiyon.
```c
char *ft_strupcase(char *str);
```

### 📁 ex08: ft_strlowcase
Bir string'deki tüm büyük harfleri küçük harfe çeviren fonksiyon.
```c
char *ft_strlowcase(char *str);
```

### 📁 ex09: ft_strcapitalize
Her kelimenin ilk harfini büyük harf yapan fonksiyon.
```c
char *ft_strcapitalize(char *str);
```

### 📁 ex10: ft_strlcpy
Kaynak string'den hedef string'e güvenli bir şekilde kopyalama yapan fonksiyon.
```c
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
```

### 📁 ex11: ft_putstr_non_printable
Yazdırılabilir olmayan karakterleri hexadecimal olarak yazdıran fonksiyon.
```c
void ft_putstr_non_printable(char *str);
```

## 🧠 Öğrenilen Kavramlar
- String kopyalama ve manipülasyon teknikleri
- Karakter tipleri ve kontrolleri (alfa, numerik, büyük/küçük harf)
- Bellek sınırlarını aşmadan güvenli string işlemleri
- ASCII karakter tablosu ve karakter dönüşümleri
- Hex formatında yazdırma

## 💡 İpuçları
- Her zaman null terminator (`\0`) karakterini dikkate alın
- String işlemlerinde taşma kontrolü yapın
- Karakter kontrollerinde ASCII değerlerini kullanın
- String kopyalamada bellek sınırlarını gözetin
- Büyük/küçük harf dönüşümlerinde ASCII farkını (32) kullanın

<div align="center">
  <h2>🚀 Başarılar!</h2>
  <img src="https://media.giphy.com/media/scZPhLqaVOM1qG4lT9/giphy.gif" alt="String Operations" width="200" />
</div>

<div align="center">
  <a href="../README.md">
    <img src="https://img.shields.io/badge/Ana%20Sayfa-0891b2?style=for-the-badge" alt="Ana Sayfa" />
  </a>
</div> 