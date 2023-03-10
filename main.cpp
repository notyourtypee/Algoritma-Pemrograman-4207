#include <iostream>
using namespace std;

void hitungTotal(float arr[], int panjang) {
  float total = 0;
  for (int i = 0; i < panjang; i++) {
    total += arr[i];
  }
  cout << "Total dari elemen-elemen array adalah: " << total << endl;
}

int main() {
  const int panjang = 5;
  float arr[panjang];

  cout << "Masukkan " << panjang << " elemen array: ";
  for (int i = 0; i < panjang; i++) {
    cin >> arr[i];
  }

  hitungTotal(arr, panjang);

  return 0;
}
