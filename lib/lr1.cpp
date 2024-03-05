#include "lr1.h"

std::pair<int, int> countAndSum(const std::vector<int>& array) {
    int count = 0;
    int total = 0;
    for (int num : array) {
        if (num % 5 == 0 && num % 7 != 0) {
            count++;
            total += num;
        }
    }
    return std::make_pair(count, total);
}


result findPairs(const std::vector<int>&  array) {
    result res;
    int n = array.size();
    int i = 0;
    if (n == 0) {
        res.errMas.push_back(std::make_pair(1, "Пустой массив"));
        return res;
    }
    if (n > 1024) 
    {
        res.errMas.push_back(std::make_pair(2, "Количество элементов в массиве превышает 1024"));
        return res;
    }
    while (i < n - 1) {
        if (array[i] == 0) {
            if (array[i + 1] % 2 == 0) {
                if (array[i + 1] > 0) {
                    res.numMas.push_back(std::make_pair(i, array[i]));         
                    res.numMas.push_back(std::make_pair(i + 1, array[i + 1]));
                }
            }
        }
        i++;
    }
    return res;
}