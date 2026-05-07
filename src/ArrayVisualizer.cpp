#include "ArrayVisualizer.hpp"
#include "raylib.h"

ArrayVisualizer::ArrayVisualizer(std::vector<int> &t) : tab(t) {}

void ArrayVisualizer::drawArray() {
    int screenWidth = GetScreenWidth();
    int screenHeight = GetScreenHeight();
    int n = tab.size();
    float rectangleWidth = (float)screenWidth / n;

    for (int i = 0; i < n; i++) {
        float hFactor = (float)tab[i] / n;
        int barHeight = hFactor * screenHeight;

        int posX = i * rectangleWidth;
        int posY = screenHeight - barHeight;

        DrawRectangle(posX, posY, rectangleWidth - 4, barHeight, WHITE);
    }
}