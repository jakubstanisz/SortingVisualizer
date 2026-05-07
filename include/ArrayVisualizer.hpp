#pragma once
#include <vector>
class ArrayVisualizer{
    private:
        std::vector<int> &tab;
    public:
        ArrayVisualizer(std::vector<int> &tab); 
        void drawArray();
};