#include "binary.h"

int binarysearch::leftbinarysearch(std::vector<int> arr, int target){
    int l = -1;
    int r = arr.size() - 1;

    while((l+1) != r){
        int c = (l + r) / 2;
        if (arr[c] < target)
            l = c;
        else
            r = c; 
    }
    return r;
}

int binarysearch::rightbinarysearch(std::vector<int> arr, int target){
    int l = 0;
    int r = arr.size();

    while((l+1) != r){
        int c = (l + r) / 2;
        if (arr[c] > target) 
            r = c;
        else 
            l = c;
    }
    return l;
}