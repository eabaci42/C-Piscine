# <div align="center">📚 Shell00 Modülü</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=150&section=header&text=Unix%20Shell%20Temelleri&fontSize=40&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Unix Shell Temelleri" />
</div>

<p align="center">
  <img src="https://media.giphy.com/media/xTiTnwi8Azjnva46Fq/giphy.gif" alt="Shell Programming" width="180" />
  <br>
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=Unix+Komutlar%C4%B1;Dosya+Y%C3%B6netimi;Terminal+Komutlar%C4%B1;Shell+Scriptleri" alt="Typing SVG" />
</p>

## 📋 Genel Bakış
Bu modül, Unix/Linux komut satırını tanıtır ve temel shell komutlarını öğretir. Dosya yönetimi, izinler, çevre değişkenleri ve basit shell scriptleri bu modülün ana konularıdır.

## 📝 Alıştırmalar

### 📁 ex00: Z
Z harfini içeren bir dosya oluşturma alıştırması.
```shell
# Z içeren bir dosya
echo "Z" > z
```

### 📁 ex01: testShell00
Dosya izinlerini belirli bir şekilde ayarlama alıştırması.
```shell
# Dosya oluşturma ve izinleri ayarlama
touch testShell00
chmod 455 testShell00
```

### 📁 ex02: Oh yeah, mooore...
Farklı izinlere sahip çeşitli dosyalar oluşturma.
```shell
# Çeşitli dosyaları farklı izinlerle oluşturma
touch -t 202006012342 test0
chmod 715 test0
# ... diğer dosyalar
```

### 📁 ex03: SSH me!
SSH anahtarı oluşturma ve görüntüleme.
```shell
# SSH anahtarını görüntüleme
cat ~/.ssh/id_rsa.pub
```

### 📁 ex04: midLS
Belirli bir formatta dosya listeleme.
```shell
# Dosyaları belirli formatta listeleme
ls -tmp
```

### 📁 ex05: GiT commit
Git commit ID'lerini listeleme.
```shell
# Son 5 commit'i görüntüleme
git log -5 --format="%H"
```

### 📁 ex06: gitignore
Git tarafından gözardı edilen dosyaları listeleme.
```shell
# Gözardı edilen dosyaları görüntüleme
git ls-files --ignored --exclude-standard --others
```

### 📁 ex07: diff
İki dosya arasındaki farkları bulma.
```shell
# Farkları bulup patch dosyası oluşturma
diff file1 file2 > sw.diff
```

### 📁 ex08: clean
Belirli tipte dosyaları bulma ve silme.
```shell
# Geçici dosyaları temizleme
find . -type f \( -name "*~" -o -name "#*#" \) -print -delete
```

### 📁 ex09: Illusions, not tricks, Michael...
Magic dosyası oluşturma.
```shell
# Magic dosyası için 42 formatı tanımı
42 string 42 42 file
```

## 🧠 Öğrenilen Kavramlar
- Temel Unix/Linux komutları
- Dosya ve dizin yönetimi
- Dosya izinleri ve değiştirme
- Git temel komutları
- Diff ve patch kullanımı
- find komutu ve powerfu filtreleme

## 💡 İpuçları
- `man` komutunu kullanarak herhangi bir komut hakkında detaylı bilgi alabilirsiniz
- Dosya izinlerini `chmod` komutu ile değiştirebilirsiniz
- `ls` komutunun çeşitli parametreleri bulunmaktadır
- Git komutlarını öğrenmek, versiyon kontrolü için çok önemlidir
- `find` komutu, güçlü arama seçenekleri sunar

<div align="center">
  <h2>🚀 Başarılar!</h2>
  <img src="https://media.giphy.com/media/3o7qE1YN7aBOFPRw8E/giphy.gif" alt="Terminal Commands" width="200" />
</div>

<div align="center">
  <a href="../README.md">
    <img src="https://img.shields.io/badge/Ana%20Sayfa-0891b2?style=for-the-badge" alt="Ana Sayfa" />
  </a>
</div> 