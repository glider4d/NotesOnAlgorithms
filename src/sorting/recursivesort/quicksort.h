#pragma once
#include <vector>
#include <random>

namespace recursivesort {
    int random_number(int start, int end);
    std::vector<int> QuickSort(std::vector<int>& a);
    void QuickSort(std::vector<int>& a, int fst, int lst);
}