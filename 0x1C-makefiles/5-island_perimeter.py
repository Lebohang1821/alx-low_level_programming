#!/usr/bin/python3
"""It defines island perimeter measuring function."""


def island_perimeter(grid):
    """It returns perimiter of island.
    grid represents water by 0 and land by 1.
    Args:
        grid (list): List of list of integers representing island.
    Returns
        Perimeter of island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range(height):
        for c in range(width):
            if grid[x][c] == 1:
                size += 1
                if (c > 0 and grid[x][c - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][c] == 1):
                    edges += 1
    return size * 4 - edges * 2
