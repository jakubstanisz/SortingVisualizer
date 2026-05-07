#pragma once
#include <raylib.h>
#include <vector>
class RandomArray{
    private:
        int arraySize;
    public:
        RandomArray(int arrSize);
        void setArraySize(int arrSize);
        std::vector<int> createRandomArray();
};