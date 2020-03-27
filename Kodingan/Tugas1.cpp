#include <iostream>
#define max 6
using namespace std;

main() {

  char pensit[max] = {'p', 'e', 'n', 's', 'i', 't'};
  char temp;
  // memasukan isi array dengan urutan terbalik
  for (int j = 0, i = 1; j < max/2; j++, i++) {
    temp = pensit[j];
    pensit[j] = pensit[max - i];
    pensit[max - i] = temp;
  }

  // mencetak isi array 
  for (int i = 0; i < 6; i++) {
    cout << pensit[i];
  }
}
