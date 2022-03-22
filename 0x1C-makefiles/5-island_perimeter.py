#!/usr/bin/python3
"""
    Module to calc the perimeter of an island
"""

def island_perimeter(grid):
    """
        Calcs the perimeter of the island represented by grid
    """
    height = len(grid)
    if height > 0:
        width = len(grid[0])
    
    if height == 0 or width == 0:
        return (0)

    i = j = perimeter = 0

    while (i < height):
        while (j < width):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i + 1][j] == 1:
                    perimeter -= 1
                if grid[i - 1][j] == 1:
                    perimeter -= 1
                if grid[i][j + 1] == 1:
                    perimeter -= 1
                if grid[i][j - 1] == 1:
                    perimeter -= 1
            j += 1
        j = 0
        i += 1
    return (perimeter)
