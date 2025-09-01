/*
Given a square 4x4 matrix, find and display the transpose of this matrix 
*/

#include <iostream>

void transpose(int mat[4][4]);
void printMat(int mat[4][4]);

int main() {
    int matrix[4][4];

    //getting values for matrix from user
    std::cout << "Enter values of your 4x4 matrix:\n";
    for (int i=0; i<4; i++) { //loop for the rows
        
        std::cout << "Row " << i+1 << ":\n";
        
        for (int j=0; j<4; j++) { //loop for the columns

            std::cin >> matrix[i][j]; //output value at position (i,j)
        }
    }

    //output current matrix
    std::cout << "\nOriginal matrix:\n";
    printMat(matrix);

    //calling transpose() to transpose
    std::cout << "\nTransposed matrix:\n";
    transpose(matrix);

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

void transpose(int mat[4][4]) {
    int trans[4][4];

    for (int i=0; i<4; i++) { //loop for the rows

        for (int j=0; j<4; j++) { //loop for the columns

            trans[i][j] = mat[j][i]; //assign values from mat[][] to trans[][] in a transposed position
        }
    }

    //calling printMat() to display transposed matrix
    printMat(trans);
}