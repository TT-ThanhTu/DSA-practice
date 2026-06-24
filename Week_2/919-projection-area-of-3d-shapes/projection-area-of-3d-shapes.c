int projectionArea(int** grid, int gridSize, int* gridColSize) {
    int area = 0;

    // XY
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            if (grid[i][j] > 0)
                area++;
        }
    }

    // YZ (max mỗi hàng)
    for (int i = 0; i < gridSize; i++) {
        int rowMax = 0;
        for (int j = 0; j < gridColSize[i]; j++) {
            if (grid[i][j] > rowMax)
                rowMax = grid[i][j];
        }
        area += rowMax;
    }

    // ZX (max mỗi cột)
    int n = gridColSize[0];
    for (int j = 0; j < n; j++) {
        int colMax = 0;
        for (int i = 0; i < gridSize; i++) {
            if (grid[i][j] > colMax)
                colMax = grid[i][j];
        }
        area += colMax;
    }

    return area;
}