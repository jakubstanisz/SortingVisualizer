#include "Sorting.hpp"
#include <algorithm>

void bubbleSortStep(std::vector<int>& v, int& i, int& j) {
    int n = v.size();

    if (i < n - 1) {
        if (v[j] > v[j + 1]) {
            std::swap(v[j], v[j + 1]);
        }
            
        j++;
        if (j >= n - i - 1) {
            j = 0;
            i++;
        }
    }
}