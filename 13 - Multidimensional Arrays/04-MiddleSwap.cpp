/*
Given a 4x4 integer matrix, modify the matrix by swapping its interior rows (second row swaps with third row) and then swapping its interior columns (second column swaps with third column)
    e.g.
        1 2 3 4    \    1 2 3 4    \    1 3 2 4
        0 1 0 0  ---\   0 0 1 0  ---\   0 1 0 0
        0 0 1 0  ---/   0 1 0 0  ---/   0 0 1 0
        0 1 0 1    /    0 1 0 1    /    0 0 1 1
*/

#include <iostream>

void swap(int (&mat)[4][4]);
void printMat(int mat[4][4]);

int main() {
    int matrix[4][4] = {0};

    //getting values for matrix from user
    std::cout << "Enter values of your 4x4 matrix:\n";
    for (int i=0; i<4; i++) { //loop for the rows
        
        std::cout << "Row " << i+1 << ":\n";
        
        for (int j=0; j<4; j++) { //loop for the columns

            std::cin >> matrix[i][j]; //output value at position (i,j)
        }
    }

    //output current matrix
    std::cout << "\nMatrix:\n";
    printMat(matrix);

    //swapping the rows and columns
    swap(matrix);
    
    std::cout << "\nMatrix:\n";
    printMat(matrix);

    return 0;
}

//function to print a 4x4 matrix
void printMat(int mat[4][4]) {
    for (int i=0; i<4; i++) { //loop for the rows
        
        for (int j=0; j<4; j++) { //loop for the columns

            std::cout << mat[i][j] << " "; //output value at position (i,j)
        }

        std::cout << "\n";
    }
}

void swap(int (&mat)[4][4]) {
    //swapping the rows
    for (int j=0; j<4; j++) { //loop for the columns

        int temp = mat[1][j]; //storing value from second row
        mat[1][j] = mat[2][j]; //overwriting value from second row with value from third row
        mat[2][j] = temp; //overwriting value from third row with value from second row (previously stored in temp)
    }

    //swapping the columns
    for (int i=0; i<4; i++) { //loop for the rows

        int temp = mat[i][1]; //storing value from second column
        mat[i][1] = mat[i][2]; //overwriting value from second column with value from third column
        mat[i][2] = temp; //overwriting value from third column with value from second column (previously stored in temp)
    }
}