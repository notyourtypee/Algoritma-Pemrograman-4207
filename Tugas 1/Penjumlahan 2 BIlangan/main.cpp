#include <iostream>
using namespace std;

void penjumlahan(float bilangan1, float bilangan2) {
  float hasil = bilangan1 + bilangan2;
  cout << "Hasil penjumlahan dari " << bilangan1 << " dan " << bilangan2 << " adalah: " << hasil << endl;
}

int main() {
  float bil1, bil2;

  cout << "Masukkan bilangan pertama: ";
  cin >> bil1;

  cout << "Masukkan bilangan kedua: ";
  cin >> bil2;

  penjumlahan(bil1, bil2);

  return 0;
}
