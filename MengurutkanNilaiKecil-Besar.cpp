#include <iostream>
#include <algorithm> // untuk function sort()
using namespace std;

int main () {
  int data[20] = {11, 1, 6, 3, 2, 4, 5, 8, 7, 9, 10, 15, 13, 12, 16, 19, 18, 20, 17};

  sort(data, data + 20, greater<int>());

  for (int i = 0; i < 20; i++) {
    cout << data[i] << ',';
  }
  return 0;
}