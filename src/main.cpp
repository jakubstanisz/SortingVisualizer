#include "raylib.h"
#include "RandomArray.hpp"
#include "ArrayVisualizer.hpp"
#include "Sorting.hpp"
#include <iostream>
#include <vector>
int main(int argc, char* argv[]){
    int arraySize;
    if (argc == 2){
        arraySize = std::atoi(argv[1]);
    }else {
        std::cout << "domyslne argumenty arrSize = 100\n";
        arraySize = 50;
    }
    const int screenWidth = 1000;
    const int screenHeight = 750;
    RandomArray randomArray(arraySize);
    std::vector<int> tab = randomArray.createRandomArray();
    ArrayVisualizer arrayVisualizer(tab);
    
    InitWindow(screenWidth, screenHeight, "Sorting Visualizer");
    SetTargetFPS(75);
    
    int i {};
    int j {};
    while(!WindowShouldClose()){
        bubbleSortStep(tab,i, j);
        DrawText("Bubble Sort O(n^2)", 10, 10, 40, WHITE);
        BeginDrawing();
        ClearBackground(BLACK);
        arrayVisualizer.drawArray();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}