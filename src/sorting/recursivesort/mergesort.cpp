#include "mergesort.h"

void recursivesort::merge_sorted_vectors(const std::vector<int> &A, 
                          const std::vector<int> &B, 
                          std::vector<int> &C) {
    // assert(A.size() + B.size() = C.size()
    size_t i = 0, k = 0, n = 0;
    while (i < A.size() && k < B.size()) {
        if (A[i] <= B[k]) {
            C[n++] = A[i++];

        }
        else {
            C[n++] = B[k++];
        }
    }

    while (k < B.size()) {
        C[n++] = B[k++];
    }

    while (i < A.size()) {
        C[n++] = A[i++];
    }

}

void recursivesort::merge_sort(std::vector<int>& A) {
    size_t N = A.size();
    if (N <= 1) return;
    std::vector<int> left;
    std::vector<int> right;
    for (size_t i = 0; i < N / 2; i++) left.push_back(A[i]);
    for (size_t i = N / 2; i < N; i++) right.push_back(A[i]);
    merge_sort(left);
    merge_sort(right);
    merge_sorted_vectors(left, right, A);

}