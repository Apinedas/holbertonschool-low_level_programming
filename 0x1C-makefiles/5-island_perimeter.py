#!/usr/bin/python3
"""
    Module to calc the perimeter of an island
"""


def island_perimeter(grid):
    """
        Calcs the perimeter of the island represented by grid
    """
    if not grid or not grid[0]:
        return (0)
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
                if i < (height - 1) and grid[i + 1][j] == 1:
                    perimeter -= 1
                if i >= 1 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if j < (width - 1) and grid[i][j + 1] == 1:
                    perimeter -= 1
                if j >= 1 and grid[i][j - 1] == 1:
                    perimeter -= 1
            j += 1
        j = 0
        i += 1
    return (perimeter)
