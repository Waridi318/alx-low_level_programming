'''This module defines a function island_perimeter'''
def island_perimeter(grid):
    '''This function determines the perimeter of an island'''
    length_grid = len(grid)
    index_of_i = 0
    perimeter = 0

    for i in grid:
        idx_of_j = 0
        length_of_i = len(i)
        for j in i:
            if index_of_i == 0:
                if j == 1:
                    if idx_of_j == 0:
                        if i[idx_of_j + 1] == 1:
                            perimeter = perimeter + 2
                        else:
                            perimeter = perimeter + 3
                        if grid[1][0] == 0:
                            perimeter = perimeter + 1
                        else:
                            pass
                    elif idx_of_j > 0 and idx_of_j < (length_of_i - 1):
                        if i[idx_of_j + 1] == 1:
                            perimeter = perimeter + 1
                        else:
                            perimeter = perimeter + 2
                        if grid[1][idx_of_j] == 0:
                            perimeter = perimeter + 1
                        else:
                            pass

                    else:
                        perimeter = perimeter + 2
                        if grid[1][idx_of_j] == 0:
                            perimeter = perimeter + 1
                        else:
                            pass
                else:
                    if idx_of_j == 0:
                        if i[idx_of_j + 1] == 1:
                            perimeter = perimeter + 1
                        else:
                            pass
                        if grid[1][idx_of_j] == 1:
                            perimeter= perimeter+1
                        else:
                            pass
                    elif idx_of_j > 0 and (idx_of_j < (length_of_i - 1)):
                        if i[idx_of_j + 1] == 1:
                            perimeter=perimeter+1
                        else:
                            pass
                        if grid[1][idx_of_j] == 1:
                            perimeter= perimeter+1
                        else:
                            pass
                    else:
                        if grid[1][idx_of_j] == 1:
                            perimeter= perimeter+1
                        else:
                            pass

            elif index_of_i > 0 and (index_of_i < (length_grid - 1)):
                if j == 1:
                    if idx_of_j == 0:
                        if i[idx_of_j + 1] == 1:
                            perimeter = perimeter + 1
                        else:
                            perimeter = perimeter + 2
                        if grid[index_of_i + 1][0] == 0:
                            perimeter = perimeter + 1
                        else:
                            pass
                    elif idx_of_j > 0 and idx_of_j < (length_of_i - 1):
                        if i[idx_of_j + 1] == 1:
                            pass
                        else:
                            perimeter = perimeter + 1
                        if grid[index_of_i + 1][idx_of_j] == 0:
                            perimeter = perimeter + 1
                        else:
                            pass

                    elif idx_of_j > length_of_i - 1 and  idx_of_j < length_of_i:
                        perimeter = perimeter + 1
                        if grid[index_of_i + 1][idx_of_j] == 0:
                            perimeter = perimeter + 1
                        else:
                            pass
                else:
                    if idx_of_j == 0:
                        if i[idx_of_j + 1] == 1:
                            perimeter = perimeter + 1
                        else:
                            pass
                        if grid[index_of_i + 1][idx_of_j] == 1:
                            perimeter= perimeter+1
                        else:
                            pass
                    elif idx_of_j > 0 and (idx_of_j < (length_of_i - 1)):
                        if i[idx_of_j + 1] == 1:
                            perimeter=perimeter+1
                        else:
                            pass
                        if grid[index_of_i + 1][idx_of_j] == 1:
                            perimeter= perimeter+1
                        else:
                            pass
                    elif idx_of_j > length_of_i - 1 and  idx_of_j < length_of_i:
                        if grid[index_of_i][idx_of_j] == 1:
                            perimeter= perimeter+1
                        else:
                            pass
            else: #index of i is equal to length of grid - 1
                if j == 1:
                    if idx_of_j == 0:
                        if i[idx_of_j + 1] == 1:
                            perimeter = perimeter + 2
                        else:
                            perimeter = perimeter + 3    
                    elif idx_of_j > 0 and idx_of_j < (length_of_i - 1):
                        if i[idx_of_j + 1] == 1:
                            perimeter = perimeter + 1
                        else:
                            perimeter = perimeter + 2
                    else:
                        perimeter = perimeter + 2
                else: # if j == 0
                    if idx_of_j == 0: #the very first index
                        if i[idx_of_j + 1] == 1:
                            perimeter = perimeter + 1
                        else:
                            pass
                    elif idx_of_j > 0 and (idx_of_j < (length_of_i - 1)):
                        if i[idx_of_j + 1] == 1:
                            perimeter=perimeter+1
                        else:
                            pass
                    else:
                        pass
            idx_of_j = idx_of_j + 1
        index_of_i = index_of_i + 1     
    return (perimeter)