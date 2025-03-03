#include <unistd.h>
#include <stdlib.h>

#define SIZE 9

// Function to write a character to standard output
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// Function to display the grid
void    display_grid(int grid[SIZE][SIZE])
{
    int i;
    int j;

    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            ft_putchar(grid[i][j] + '0');
            if (j < SIZE - 1)
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

// Function to check if a value is already in a row
int     is_in_row(int grid[SIZE][SIZE], int row, int val)
{
    int col;

    col = 0;
    while (col < SIZE)
    {
        if (grid[row][col] == val)
            return (1);
        col++;
    }
    return (0);
}

// Function to check if a value is already in a column
int     is_in_col(int grid[SIZE][SIZE], int col, int val)
{
    int row;

    row = 0;
    while (row < SIZE)
    {
        if (grid[row][col] == val)
            return (1);
        row++;
    }
    return (0);
}

// Count visible boxes from top (col up)
int     count_visible_from_top(int grid[SIZE][SIZE], int col)
{
    int count;
    int max_height;
    int row;

    count = 0;
    max_height = 0;
    row = 0;
    while (row < SIZE)
    {
        if (grid[row][col] > max_height)
        {
            max_height = grid[row][col];
            count++;
        }
        row++;
    }
    return (count);
}

// Count visible boxes from bottom (col down)
int     count_visible_from_bottom(int grid[SIZE][SIZE], int col)
{
    int count;
    int max_height;
    int row;

    count = 0;
    max_height = 0;
    row = SIZE - 1;
    while (row >= 0)
    {
        if (grid[row][col] > max_height)
        {
            max_height = grid[row][col];
            count++;
        }
        row--;
    }
    return (count);
}

// Count visible boxes from left (row left)
int     count_visible_from_left(int grid[SIZE][SIZE], int row)
{
    int count;
    int max_height;
    int col;

    count = 0;
    max_height = 0;
    col = 0;
    while (col < SIZE)
    {
        if (grid[row][col] > max_height)
        {
            max_height = grid[row][col];
            count++;
        }
        col++;
    }
    return (count);
}

// Count visible boxes from right (row right)
int     count_visible_from_right(int grid[SIZE][SIZE], int row)
{
    int count;
    int max_height;
    int col;

    count = 0;
    max_height = 0;
    col = SIZE - 1;
    while (col >= 0)
    {
        if (grid[row][col] > max_height)
        {
            max_height = grid[row][col];
            count++;
        }
        col--;
    }
    return (count);
}

// Check if the current grid state satisfies all constraints
int     check_constraints(int grid[SIZE][SIZE], int constraints[4][SIZE])
{
    int i;

    // Check only completed rows and columns
    for (i = 0; i < SIZE; i++)
    {
        // Only check rows that are completely filled
        if (!is_in_row(grid, i, 0))
        {
            if (count_visible_from_left(grid, i) != constraints[2][i])
                return (0);
            if (count_visible_from_right(grid, i) != constraints[3][i])
                return (0);
        }
        
        // Only check columns that are completely filled
        if (!is_in_col(grid, i, 0))
        {
            if (count_visible_from_top(grid, i) != constraints[0][i])
                return (0);
            if (count_visible_from_bottom(grid, i) != constraints[1][i])
                return (0);
        }
    }
    return (1);
}

// Recursive function to solve the puzzle using backtracking
int     solve(int grid[SIZE][SIZE], int constraints[4][SIZE], int row, int col)
{
    int val;

    // If we've reached the end of the grid, check if all constraints are satisfied
    if (row == SIZE)
        return (1);
    
    // Move to the next row when we reach the end of the current row
    if (col == SIZE)
        return (solve(grid, constraints, row + 1, 0));
    
    // Try placing each value from 1 to SIZE
    val = 1;
    while (val <= SIZE)
    {
        // Check if placing the value doesn't conflict with row and column constraints
        if (!is_in_row(grid, row, val) && !is_in_col(grid, col, val))
        {
            // Place the value
            grid[row][col] = val;
            
            // Check if the current partial solution satisfies the constraints so far
            if (check_constraints(grid, constraints))
            {
                // Recursively try to solve the rest of the grid
                if (solve(grid, constraints, row, col + 1))
                    return (1);
            }
            
            // If we couldn't solve with this value, backtrack
            grid[row][col] = 0;
        }
        val++;
    }
    
    // If we've tried all values and none worked, return failure
    return (0);
}

// Parse the input constraints
int     parse_constraints(char *input, int constraints[4][SIZE])
{
    int i;
    int j;
    int index;

    i = 0;
    index = 0;
    
    // Parse all 16 constraints
    while (i < 4)
    {
        j = 0;
        while (j < SIZE)
        {
            // Skip spaces
            while (input[index] == ' ')
                index++;
            
            // Check if the input is a valid digit between 1 and SIZE
            if (input[index] >= '1' && input[index] <= (SIZE + '0'))
                constraints[i][j] = input[index] - '0';
            else
                return (0);
            
            index++;
            j++;
        }
        i++;
    }
    
    // Check that we've reached the end of the input
    while (input[index] == ' ')
        index++;
    
    if (input[index] != '\0')
        return (0);
    
    return (1);
}

int     main(int argc, char **argv)
{
    int grid[SIZE][SIZE] = {0};
    int constraints[4][SIZE];
    int i, j;

    // Initialize grid and constraints
    for (i = 0; i < 4; i++)
        for (j = 0; j < SIZE; j++)
            constraints[i][j] = 0;

    // Check if we have exactly one argument
    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return (1);
    }
    
    // Parse the input constraints
    if (!parse_constraints(argv[1], constraints))
    {
        write(1, "Error\n", 6);
        return (1);
    }
    
    // Try to solve the puzzle
    if (solve(grid, constraints, 0, 0))
        display_grid(grid);
    else
        write(1, "Error\n", 6);
    
    return (0);
}