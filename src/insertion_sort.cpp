#include "insertion_sort.h"

template <typename T>
void insertion_sort(std::vector<T>& v) {
  if (v.size() <= 1) return;

  for (int i = 1; i < v.size(); i++) {
    int j = i - 1;
    T val = v[i];

    while (j >= 0 && v[j] > val) {
      v[j + 1] = v[j];
      j--;
    }

    v[j + 1] = val;
  }
}
