/*
    Tugas Teori Pertemuan 8
    Nama : Muhammad Atha Nassa
    Nim  : A11.2022.14287
    Tgl  : 22 Mei 2023
*/

#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung penjumlahan dari 1 sampai 'a'
int penjumlahan(int a){
    return (a == 1) ? 1 : a + penjumlahan(a - 1);
}

// Fungsi rekursif untuk menghitung pengurangan dari 'b' sampai 1
int pengurangan(int b){
    return (b == 1) ? 1 : b - pengurangan(b - 1);
}

// Fungsi rekursif untuk melakukan perkalian 'c' sebanyak 'n' kali
int perkalian(int c,int n){
    return (n == 0) ? 0 : (n > 0) ? c + perkalian(c, n - 1) : (-c) + perkalian(c, n + 1);
}

// Fungsi rekursif untuk menghitung pembagian 'd' dengan 'e'
int pembagian(int d, int e){
    return (d < e) ? 0 : 1 + pembagian(d - e, e);
}

// Fungsi rekursif untuk menghitung 'e' pangkat 'f'
int pangkat(int e, int f) {
    return (f == 0) ? 1 : e * pangkat(e, f - 1);
}

// Fungsi rekursif untuk mencari bilangan fibonacci ke-'e'
int fibonaci(int e){
    return (e == 0) ? 0 : (e == 1) ? 1 : fibonaci(e - 1) + fibonaci(e - 2);
}

// Fungsi rekursif untuk menghitung faktorial dari 'f'
int faktorial(int f){
    return (f == 0) ? 1 : f * faktorial(f - 1);
}

// Prosedur untuk menampilkan keterangan pada operasi penjumlahan atau pengurangan
void keterangan(int n, int k){
    string operatorSymbol = (k == 1) ? " + " : " - ";
    for(int i = n; i > 0; i--){
        cout << "(" << i << (i > 1 ? operatorSymbol : "");
    }
    for(int j = 0; j < n; j++){
        cout << ")";
    }
}

int main()
{
    int n,m;
    cin >> n >> m;

    cout << "Penjumlahan ";
    keterangan(n,1);
    cout << ": " << penjumlahan(n) << endl;

    cout << "Pengurangan ";
    keterangan(n,2);
    cout << ": " << pengurangan(n) << endl;

    cout << "Perkalian " << n << " * " << m << ": " << perkalian(n,m) << endl;

    cout << "Pembagian " << n << " / " << m << ": " << pembagian(n,m) << endl;

    cout << "Pangkat "   << n << " ^ " << m << ": " << pangkat(n,m) << endl;

    cout << "Fibonaci ke-" << n << ": " << fibonaci(n) << endl;

    for(int i = 0; i <= n ;i++){
        cout << fibonaci(i) << " ";
    }
    cout << endl;

    cout << "Faktorial !" << n << ": " << faktorial(n) << endl;

    return 0;
}
