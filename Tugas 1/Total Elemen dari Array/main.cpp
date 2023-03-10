#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Masukkan jumlah elemen array: ";
   cin >> n;

   int arr[n];
   int total = 0;

   // meminta pengguna untuk mengisi nilai elemen array
   for(int i=0; i<n; i++) {
      cout << "Masukkan nilai elemen ke-" << i+1 << ": ";
      cin >> arr[i];
   }

   // menghitung total elemen
   for(int i=0; i<n; i++) {
      total += arr[i];
   }

   cout << "Total elemen array: " << total << endl;

   return 0;
}
