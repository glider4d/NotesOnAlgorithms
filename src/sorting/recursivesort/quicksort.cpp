#include "quicksort.h"

int recursivesort::random_number(int start, int end) {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(start, end); //[start,end]
    return dist(rng);
}

std::vector<int> recursivesort::QuickSort(std::vector<int>& a) {
    if (a.size() <= 1) return a;
    
    int indexRandom = random_number(0, a.size() - 1);
    int q = a[indexRandom]; //randome choice

    std::vector<int> l, m, r;

    for (auto x : a) {
        if (x < q)
            l.push_back(x);
        else if (x > q)
            r.push_back(x);
        else
            m.push_back(x);
    }
    auto resL = QuickSort(l);
    auto resR = QuickSort(r);

    resL.insert(resL.end(), m.cbegin(), m.cend());
    resL.insert(resL.end(), resR.cbegin(), resR.cend());
    return resL;
}

void recursivesort::QuickSort(std::vector<int>& a, int fst, int lst){
    if (fst >= lst) return;
    int i = fst;
    int j = lst;
    int pivot = a[random_number(fst, lst)];
    while (i <= j) {
        while (a[i] < pivot) 
            i++;
        while (a[j] > pivot) 
            j--;
        if (i <= j) {
            std::swap(a[i++], a[j--]);
        }
    }
    QuickSort(a, fst, j);
    QuickSort(a, i, lst);
}
