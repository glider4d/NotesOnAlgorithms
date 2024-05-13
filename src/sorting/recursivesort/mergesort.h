#pragma once

#include <vector>

namespace recursivesort {

    void merge_sorted_vectors(const std::vector<int> &A, 
                            const std::vector<int> &B, 
                            std::vector<int> &C);
    void merge_sort(std::vector<int>& A);
}