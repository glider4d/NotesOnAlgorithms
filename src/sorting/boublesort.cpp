#include "boublesort.h"

void sorting::boublesort(std::vector<int> &a){
    int n = a.size();
    for ( int i = 0; i < n; i++){
        for( int j = 0; j < (n-i-1); j++){
            if (a[j] > a[j + 1]){
                std::swap(a[j], a[j+1]);
            }
        }
    }
}