#include "RandomArray.hpp"
#include <vector>
#include <algorithm>
#include <random>

RandomArray::RandomArray(int arrSize){
    arraySize = arrSize;
}
void RandomArray::setArraySize(int arrSize){
    arraySize = arrSize;
}
std::vector<int> RandomArray::createRandomArray(){
    std::vector<int> tab;

    for (int i {1}; i < arraySize; i++){
        tab.push_back(i);
    }
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(tab), std::end(tab), rng);
    return tab;
}