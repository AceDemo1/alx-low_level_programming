#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """Return the perimeter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    i = 0
    a = len(grid)
    b = len(grid[0])
    for j in range(a):
        for k in range(b):
            if grid[j][k] == 1:
                i += 4
            if k > 0 and grid[j][k - 1] == 1:
                i -= 2
            if j > 0 and grid[j - 1][k] == 1:
                i -= 2
    return i
