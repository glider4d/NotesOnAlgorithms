#include <iostream>
#include "binarysearch/binary.h"
#include "sorting/recursivesort/quicksort.h"
#include "sorting/recursivesort/mergesort.h"
#include "sorting/boublesort.h"

int main(int argc, char* argv[]){
    std::vector<int> arr{1,3,2};

    recursivesort::QuickSort(arr, 0, arr.size());

    // recursivesort::merge_sort(arr);
    // sorting::boublesort(arr);
//    auto res = recursivesort::QuickSort(arr);
    for (auto item : arr){
        std::cout<<item<<" ";
    }
    // auto res = binarysearch::rightbinarysearch(arr, 5);
    // std::cout<<res<<std::endl;
    return 0;
}