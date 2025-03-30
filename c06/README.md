# <div align="center">📚 C06 Modülü</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=150&section=header&text=Program%20Arg%C3%BCmanlar%C4%B1&fontSize=40&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Program Argümanları" />
</div>

<p align="center">
  <img src="https://media.giphy.com/media/3oEjI6SIIHBdRxXI40/giphy.gif" alt="Command Line" width="180" />
  <br>
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=Komut+Sat%C4%B1r%C4%B1+Arg%C3%BCmanlar%C4%B1;main(argc%2C+argv);Parametre+%C4%B0%C5%9Fleme;S%C4%B1ralama+Algoritmalar%C4%B1" alt="Typing SVG" />
</p>

## 📋 Genel Bakış
Bu modül, C dilinde program argümanlarının nasıl işleneceğini ve programların komut satırından nasıl parametre alabileceğini öğretir. Gerçek programlar geliştirmenin önemli bir adımı olan argüman işlemeyi bu modülde öğreneceksiniz.

## 📝 Alıştırmalar

### 📁 ex00: ft_print_program_name
Programın kendi adını yazdıran program.
```c
// Program adını yazdırır: ./a.out
int main(int argc, char **argv);
```

### 📁 ex01: ft_print_params
Programın bütün argümanlarını yazdıran program.
```c
// Komut satırından gelen argümanları yazdırır
int main(int argc, char **argv);
```

### 📁 ex02: ft_rev_params
Programın bütün argümanlarını tersten yazdıran program.
```c
// Argümanları sondan başa doğru yazdırır
int main(int argc, char **argv);
```

### 📁 ex03: ft_sort_params
Programın bütün argümanlarını alfabetik olarak sıralayıp yazdıran program.
```c
// Argümanları sıralayarak yazdırır
int main(int argc, char **argv);
```

## 🧠 Öğrenilen Kavramlar
- Komut satırı argümanları ve nasıl erişileceği
- `argc` ve `argv` parametrelerinin kullanımı
- String dizileri ile çalışma
- String karşılaştırma ve sıralama
- Bubble sort algoritması

## 💡 İpuçları
- `argc`, programınıza geçilen argüman sayısını içerir (program adı dahil)
- `argv`, argümanları içeren bir string dizisidir, `argv[0]` program adıdır
- String karşılaştırmada daha önce kodladığınız `ft_strcmp` fonksiyonunu kullanabilirsiniz
- Sıralama için bubble sort gibi basit bir algoritma tercih edebilirsiniz
- Kod standartları ve hafıza yönetimini bu modülde de göz önünde bulundurun

<div align="center">
  <h2>🚀 Başarılar!</h2>
  <img src="https://media.giphy.com/media/xT9IgzoKnwFNmISR8I/giphy.gif" alt="Command Line Arguments" width="200" />
</div>

<div align="center">
  <a href="../README.md">
    <img src="https://img.shields.io/badge/Ana%20Sayfa-0891b2?style=for-the-badge" alt="Ana Sayfa" />
  </a>
</div> 