#include <iostream>
using namespace std;

void hitungRata(float arr[], int panjang) {
  float total = 0;
  for (int i = 0; i < panjang; i++) {
    total += arr[i];
  }
  float rata = total / panjang;
  cout << "Rata-rata dari elemen-elemen array adalah: " << rata << endl;
}

int main() {
  const int panjang = 5;
  float arr[panjang];

  cout << "Masukkan " << panjang << " elemen array: ";
  for (int i = 0; i < panjang; i++) {
    cin >> arr[i];
  }

  hitungRata(arr, panjang);

  return 0;
}
