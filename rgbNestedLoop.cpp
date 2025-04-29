// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: April 28, 2025
// This program all RGB colors from 0 to 255, increasing by 15
// It uses three nested loops one for each color

#include <iostream>

int main() {
    // Red starts from 0 until 255, incrementing by 15
    for (int red = 0; red <= 255; red += 15) {
        // Green starts from 0 until 255, incrementing by  15
        for (int green = 0; green <= 255; green += 15) {
            // Blue starts from 0 until 255, incrementing by 15
            for (int blue = 0; blue <= 255; blue += 15) {
                // Display RGB inside the loop
                std::cout << red << "," << green << "," << blue << std::endl;
            }
        }
    }
    return 0;
}
