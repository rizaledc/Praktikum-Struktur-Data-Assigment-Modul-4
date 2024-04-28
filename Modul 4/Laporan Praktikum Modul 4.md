# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Rizal Wahyu Pratama</p>
<p align="center">2311110029</p>

## Dasar Teori

Searching yang dalam bahasa Indonesia artinya mencari, dengan algoritma searching seseorang dapat membuat program untuk mencari serta menemukan suatu nilai pada kumpulan data. Terdapat tiga kondisi sebagai hasil dari algoritma searching ini diantaranya: data ditemukan, data tidak ditemukan, dan data ditemukan lebih dari satu. Algoritma pencarian secara linear adalah algoritma untuk mencari sebuah nilai pada tabel sembarang dengan cara melakukan pass atau traversal dari awal sampa akhir tabel. Ada dua macam cara pencarian pada tabel. Algoritma ini mempunyai dua jenis metode yaitu dengan boolean dan tanpa boolean [1]. 

Algoritma searching dapat mempermudah metode pencarian data dengan terurut mulai dari awal hingga akhir berdasarkan kunci yang dicari [2]. Proses pencarian dari algoritma searching ini akan berhenti ketika elemen kunci yang dicari telah ditemukan dalam baris maupun tidak ditemukan dalam baris ketika udah semua baris diperiksa [3]. Terdapat 2 metode pada algoritma searching diantaranya:

a. Sequential Search

Algortima sequential searching adalah pencarian data semantik menggunakan teknologi array satu dimensi untuk melakukan proses pencarian tanpa  melalui semua elemen array secara berurutan, sehingga tidak perlu dilakukan pengurutan data terlebih dahulu [4]. Searching ini juga dapat diartikan dengan proses pencarian suatu data dalam sebuah array tanpa mengecek satu persatu pada setiap index baris. 

Contoh Sequential Search:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/Sequential.png" alt="Alt Text">
</p>

b. Binary Search
Algoritma binary search adalah algoritma untuk mencari sebuah nilai pada tabel teurut dengan cara menghilangkan setengah data pada setiap langkah [1]. Dalam penerapan algoritma ini sering digabungkan dengan algoritma sorting agar data dapat diurutkan terlebih dahulu. Binary search merupakan algoritma yang bekerja dengan cara membagi array menjadi dua bagian dengan mencari nilai tengahnya, lalu membandingkan nilai tengah tersebut dengan nilai yang sedang dicari. Jika nilai yang dicari sama dengan nilai tengah, maka program akan berhenti. Namun, jika nilai yang dicari tidak sama dengan nilai tengah, algoritma akan menentukan apakah nilai yang dicari lebih kecil atau lebih besar dari nilai tengah. Jika lebih kecil dari nilai tengah, maka bagian kanan dari data akan diabaikan, dan hanya bagian kiri yang akan diperiksa, begitu pula sebaliknya. Proses ini akan terus dilakukan hingga nilai yang dicari ditemukan atau seluruh array telah diperiksa.

Contoh Binary Search:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/Binary.png" alt="Alt Text">
</p>

## Guided 

### 1. Guided 1

#### Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data. .

```C++
#include <iostream> 
using namespace std;

int main(){ 
    int n = 10; 
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}; 
    int cari = 10; 
    bool ketemu = false; 
    int i; 
    // algoritma Sequential Search 
    for (i = 0; i < n; i++){ 
        if(data[i] == cari){ 
            ketemu = true; 
            break; 
        } 
    } 
        cout << "\t Program Sequential Search Sederhana\n" << endl ;
        cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl; 
    if (ketemu){ 
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl ;
    } else { 
        cout << cari << " tidak dapat ditemukan pada data." << endl ; 
    } 
    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
int main(){ 
    int n = 10; 
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}; 
    int cari = 10; 
    bool ketemu = false; 
    int i; 
```

Fungsi main() ini merupakan fungsi utama dan pertama di eksekusi dalam program. Pada kode ini terdapat variabel 'n' yang dapat menyimpan jumlah elemen dalam array 'data'. Variabel 'cari' akan menyimpan angka yang akan dicari dalam array. Berikutnya untuk variabel 'ketemu' akan bertipe boolean yang digunakan untuk menandai apakah angka yang dicari ditemukan atau tidak.

#### Bagian 3

```C++
// algoritma Sequential Search 
    for (i = 0; i < n; i++){ 
        if(data[i] == cari){ 
            ketemu = true; 
            break; 
        } 
    } 
```

Pada kode di atas kita menggunakan loop for untuk melakukan pencarian sekuensial.

#### Bagian 4

```C++
        cout << "\t Program Sequential Search Sederhana\n" << endl ;
        cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl; 
```

Kode di atas merupakan bagian output yang memberikan luaran dari kode yang telah dituliskan.

#### Bagian 5

```C++
    if (ketemu){ 
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl ;
    } else { 
        cout << cari << " tidak dapat ditemukan pada data." << endl ; 
    } 
    return 0;
```

Kode di atas menggunakan if dan else untuk mengecek nilai dari variabel 'ketemu'. Jika 'ketemu' bernilai True maka angka ditemukan dalam array. Namun, jika 'ketemu' bernilai False maka angka tidak ditemukan dalam array.

#### Output :

```C++
Program Sequential Search Sederhana

 data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}

 angka 10 ditemukan pada indeks ke-9
```

**Penjelasan:**

Program di atas akan mengeluarkan output pesan singkat di awal program, lalu akan memunculkan data yang ada dan memberitahu angka yang ditemukan berada pada indeks ke berapa.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/Guided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/OutGuided1.png" alt="Alt Text">
</p>

### 2. Guided 2
#### Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <iomanip>

using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. iomanip digunakan untuk mengatur tampilan dari output dalam C++. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
```

Menginisiasi array 'bil_data' yang berisi data angka. Lalu 'cari' untuk menyimpan data yang akan di cari.

#### Bagian 3

```C++
void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}
```

Kode di atas merupakan fungsi selection sort yang digunakan untuk mengurutkan data di dalam array 'bil_data' secara ascending atau dari kecil ke terbesar.

#### Bagian 4

```C++
void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}
```

Pada kode di atas, merupakan fungsi binary search yang digunakan untuk mencari data dalam array yang sudah ada. Cara kerjanya sama yaitu dengan membagi dua nilai array lalu melakukan kerja seperti halnya binary search.

#### Bagian 5

```C++
int main() {
    // Output judul program
    cout << "\t BINARY SEARCH\n";
    
    // Output data awal
    cout << "\n Data : ";
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    
    // Input data yang akan dicari
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    
    // Output data setelah diurutkan
    cout << "\n Data diurutkan : ";
    selection_sort();
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    
    // Pencarian menggunakan Binary Search
    binary_search();
    return 0;
}
```

Fungsi di atas merupakan fungsi main atau fungsi utama dalam pemrograman, fungsi ini akan dieksekusi pertama kali dalam program mulai dari pesan "BINARY SEARCH" yang berada di tengah, lalu ada output data awal, lalu pengguna akan menginputkan data yang akan dicari, berikutnya ada output data setelah di urutkan, dan yang terakhir ada output pencarian menggunakan binary search. Data yang dicar8i akan diberikan pesan data ditemukan pada indeks ke berapa.

#### Output:

```C++
BINARY SEARCH

 Data :   1  8  2  5  4  9  7

 Masukkan data yang ingin Anda cari : 8

 Data diurutkan :   1  2  4  5  7  8  9

 Data ditemukan pada index ke-5
```

**Penjelasan:**

Sesuai dengan fungsi main, output di atas urutannya telah di atur dalam fungsi main mulai dari output string BINARY SEARCH, data, lalu inputan data yang ingin dicari, berikutnya data yang diurutkan dan data ditemukan pada indeks ke-5, karena pengguna ingin mencari angka 8 yang setelah di urutkan berada pada indeks ke-5.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/Guided2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/OutGuided2.png" alt="Alt Text">
</p>

## Unguided 

### 1. Unguided 1

#### Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search! 

**Kode Program:**

```C++
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Fungsi untuk mencari sebuah huruf pada sebuah kalimat menggunakan Binary Search
bool binarySearch(const string& sentence, char target) {
    int left = 0;
    int right = sentence.length() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sentence[mid] == target) {
            return true; // Huruf ditemukan
        } else if (sentence[mid] < target) {
            left = mid + 1; // Cari di sebelah kanan
        } else {
            right = mid - 1; // Cari di sebelah kiri
        }
    }

    return false; // Huruf tidak ditemukan
}

int main() {
    string sentence;
    char target;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    // Melakukan sorting pada kalimat untuk memastikan binary search dapat berfungsi
    sort(sentence.begin(), sentence.end());

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    // Menggunakan binary search untuk mencari huruf
    if (binarySearch(sentence, target)) {
        cout << "Huruf '" << target << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. #include <algorithm> dan #include <string> digunakan untuk menyediakan fungsi algoritma dan mengatur string lebih luas dan lebih mudah. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
bool binarySearch(const string& sentence, char target) {
    int left = 0;
    int right = sentence.length() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sentence[mid] == target) {
            return true; // Huruf ditemukan
        } else if (sentence[mid] < target) {
            left = mid + 1; // Cari di sebelah kanan
        } else {
            right = mid - 1; // Cari di sebelah kiri
        }
    }

    return false; // Huruf tidak ditemukan
}
```

Kode di atas merupakan fungsi binary search yang dapat menerima dua parameter yaitu sentence yang berupa kalimat dan target yang merupakan huruf yang akan dicari oleh pengguna. Pencarian dalam kode ini dengan cara mengurutkan huruf dalam sentence lalu mencari huruf dalam variabel target menggunakan binary search.

#### Bagian 3

```C++
int main() {
    string sentence;
    char target;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    // Melakukan sorting pada kalimat untuk memastikan binary search dapat berfungsi
    sort(sentence.begin(), sentence.end());

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    // Menggunakan binary search untuk mencari huruf
    if (binarySearch(sentence, target)) {
        cout << "Huruf '" << target << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
```

Fungsi di atas merupakan fungsi main yang berupa fungsi utama di dalam progran. Fungsi ini akan meminta pengguna untuk memasukkan kalimat dengan fungsi getline lalu memasukkan huruf yang ingin di cari menggunakan cin. Sebelum melakukan pencarian, kode akan menggunakan fungsi sorting untuk mengurutkan kalimat, lalu fungsi binary search akan berjalan. Jika huruf yang dicari ada pada kalimat maka outputnya akan masuk ke if, jika tidak ditemukan maka akan mengeksekusi pada bagian else.

**Output:**

```C++
Masukkan kalimat: Rizal Wahyu Pratama
Masukkan huruf yang ingin dicari: P
Huruf 'P' ditemukan dalam kalimat.
```

#### Penjelasan

Pada output di atas, pengguna memasukkan kalimat Rizal Wahyu Pratama dengan mencari huruf P. Karena huruf P ada di dalam kalimat maka outputnya adalah "Huruf 'P' ditemukan dalam kalimat".

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/Unguided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/OutUnGuid1.png" alt="Alt Text">
</p>

### 2. Unguided 2

#### Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat! 

**Kode Program:**

```C++
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to count the number of vowels in a sentence
int countVowels(const string& sentence) {
    int vowelCount = 0;

    for (char c : sentence) {
        // Convert character to lowercase
        char lowercaseChar = tolower(c);

        // Check if the character is a vowel
        if (lowercaseChar == 'a' || lowercaseChar == 'i' || lowercaseChar == 'u' ||
            lowercaseChar == 'e' || lowercaseChar == 'o') {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int numVowels = countVowels(sentence);

    cout << "The number of vowels in the sentence is: " << numVowels << endl;

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
```

Dalam kode di atas kita akan menggunakan 2 library yaitu **<iostream>** untuk input dan output, #include <cctype> digunakan untuk mengevaluasi dan memanipulasi karakter, serta **<string>** untuk membebaskan dalam penggunaan tipe data string. Lalu namespace **std** dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
// Function to count the number of vowels in a sentence
int countVowels(const string& sentence) {
    int vowelCount = 0;

    for (char c : sentence) {
        // Convert character to lowercase
        char lowercaseChar = tolower(c);

        // Check if the character is a vowel
        if (lowercaseChar == 'a' || lowercaseChar == 'i' || lowercaseChar == 'u' ||
            lowercaseChar == 'e' || lowercaseChar == 'o') {
            vowelCount++;
        }
    }

    return vowelCount;
}
```

Kode di atas merupakan fungsi untuk menghitung jumlah huruf vokal yang ada pada kalimat yang diberikan. Menggunakan sentence yang merupakan kalimat yang akan dianalisis dan mengubahnya semua ke dalam huruf kecil menggunakan tolower(), jika ada huruf vokal dalam kalimat maka akan ditambahkan ke vowelcount.

#### Bagian 3

```C++
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int numVowels = countVowels(sentence);

    cout << "The number of vowels in the sentence is: " << numVowels << endl;

    return 0;
}
```

Kode di atas merupakan kode yang digunakan untuk membuat fungsi main. Fungsi main ini merupakan kode yang pertama kali akan dieksekusi dalam menjalankan sebuah program. Pertama-tama pengguna akan diminta untuk memasukkan kalimat dengan menggunakan getline(). Lalu memanggil fungsi countVowels untuk menghitung banyaknya huruf vokal dari kalimat yang dimasukkan pengguna. Lalu hasilnya akan muncul menggunakan cout.

**Output:**

```C++
Enter a sentence: Rizal Wahyu Pratama
The number of vowels in the sentence is: 7
```

#### Penjelasan

Pada output di atas pengguna memasukkan kalimat Rizal Wahyu Pratama, karena dalam kalimat ini terdapat 7 huruf vokal maka program tadi memunculkan outputnya berupa "The number of vowels in the sentence is: 7"

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/Unguided2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/OutUnGuid2.png" alt="Alt Text">
</p>

### 3. Unguided 3

#### Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

**Kode Program:**

```C++
#include <iostream>
#include <vector>

using namespace std;

// Function to count the occurrences of a number in a vector using Sequential Search
int countOccurrences(const vector<int>& data, int target) {
    int count = 0;

    for (int num : data) {
        if (num == target) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    int numOccurrences = countOccurrences(data, target);

    cout << "The number of occurrences of " << target << " in the data is: " << numOccurrences << endl;

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <vector>

using namespace std;
```

Dalam kode di atas kita akan menggunakan 3 library yaitu **<iostream>** untuk input dan output, **<vector>** untuk membebaskan dalam penggunaan vector dalam pengurutan. Lalu namespace **std** dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
int countOccurrences(const vector<int>& data, int target) {
    int count = 0;

    for (int num : data) {
        if (num == target) {
            count++;
        }
    }

    return count;
}
```

Pada kode di atas akan menerima dua argumen yaitu data yang berupa vektor yang berisi data integer. Lalu terdapat target yang merupakan angka yang akan dicari dalam data. Pada fungsi ini program menggunakan algoritma Sequential Search untuk mencari angka di dalam vektor data yang sesuai dengan angka pada target. Jika ada angka yang cocok, maka akan dimasukkan ke variabel count yang akan mengembalikan jumlah angka yang muncul ke vektor data.

#### Bagian 3

```C++
int main() {
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    int numOccurrences = countOccurrences(data, target);

    cout << "The number of occurrences of " << target << " in the data is: " << numOccurrences << endl;

    return 0;
}
```

Pada fungsi main di atas merupakan fungsi yang akan di eksekusi pertama, dimana terdapat vektor data yang akan diinisiasi dengan data yang telah dimasukkan. Berikutnya fungsi cout0ccourrences, data, dan target dipanggil ke dalam kode. Lalu hasil yang telah diperoleh dari pemanggilan fungsi ini akan dimunculkan sebagai output dengan cout.

**Output:**

```C++
The number of occurrences of 4 in the data is: 4
```

#### Penjelasan

Pada output di atas karena kita mencari angka 4 pada data yang diberikan, maka program akan mencari banyaknya angka 4. Pada data yang diberikan terdapat 4 angka 4 maka outputnya adalah The number of occurrences of 4 in the data is: 4.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/Unguided3.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-4/blob/main/Modul%204/Screenshot/OutUnGuid3.png" alt="Alt Text">
</p>

## Kesimpulan

Algoritma searching merupakan salah satu algoritma yang sering digunakan dalam pemrograman. Karena, dengan menggunakan algoritma searching ini seorang programer dapat dengan mudah membuat program yang efisien untuk mencari dan menemukan nilai dalam kumpulan data. Dalam algoritma searching, terdapat dua algoritma yaitu Sequentual Search dan Binary Search. Dimana sequential searching adalah pencarian data semantik menggunakan teknologi array satu dimensi untuk melakukan proses pencarian tanpa  melalui semua elemen array secara berurutan, sehingga tidak perlu dilakukan pengurutan data terlebih dahulu. 

Berikutnya, binary search yang merupakan algoritma yang cara kerjanya adalah membagi array menjadi dua bagian dengan mencari nilai tengahnya, lalu membandingkan nilai tengahnya dengan nilai yang dicari. Jika nilai yang dicari sesuai dengan nilai tengah maka program akan selesai. Jika nilai dicari tidak sama dengan nilai tengah, maka algoritma akan melihat apakah nilai yang dicari lebih kecil dari nilai tengah atau lebih besar. Jika lebih kecil dari nilai tengah, maka bagian kanan data akan dihirauhkan dan mengecek hanya bagian kirinya, begitu pula dengan sebaliknya. Hal ini akan dilakukan hingga nilai ditemukan atau array telah habis dicek.

## Referensi

[1]	L. H. Atrinawati, “Analisis Kompleksitas Algoritma untuk Berbagai Macam Metode Pencarian Nilai (Searching) dan Pengurutan Nilai (Sorting) pada Tabel,” Progr. Stud. Tek. Inform., pp. 1–13.

[2] M. Utami and Y. Apridiansyah, "Implementasi Algoritma Sequential Searching Pada Sistem Pelayanan Puskesmas Menggunakan Bootstrap (Studi Kasus Puskesmas Kampung Bali Bengkulu)," Journal Scientific and Applied Informatics (JSAI), vol. 2, no. 2614-3062, 2019.

[3]	I. H. Mulyana and M. Rifqi, “Implementasi Algoritma Binary Tree dan Sequential Searching pada Aplikasi Web Multilevel Marketing,” J. Inform. J. Pengemb. IT, vol. 5, no. 3, pp. 83–87, 2020, doi:10.30591/jpit.v5i3.2087.

[4]	W. S. Wahyuni, S. Andryana, and B. Rahman, “Penggunaan Algoritma Sequential Searching Pada Aplikasi Perpustakaan Berbasis Web,” JIPI (Jurnal Ilm. Penelit. dan Pembelajaran Inform., vol. 7, no. 2, pp.294–302, 2022, doi: 10.29100/jipi.v7i2.2646.

