/*
Given two 4x4 matrices, mat1 and mat2, find the matrix that results from the multiplication mat1 and mat2
*/

#include <iostream>

void printMat(int mat[4][4]);
void multiplyMatrices(int mat1[4][4], int mat2[4][4], int (&res)[4][4]);

int main() {
    int matrix1[4][4], matrix2[4][4];
    int result[4][4] = {0};

    //getting values for matrix1 from user
    std::cout << "Enter values of your first 4x4 matrix:\n";
    for (int i=0; i<4; i++) { //loop for the rows
        
        std::cout << "Row " << i+1 << ":\n";
        
        for (int j=0; j<4; j++) { //loop for the columns

            std::cin >> matrix1[i][j]; //output value at position (i,j)
        }
    }

    //getting values for matrix1 from user
    std::cout << "\nEnter values of your second 4x4 matrix:\n";
    for (int i=0; i<4; i++) { //loop for the rows
        
        std::cout << "Row " << i+1 << ":\n";
        
        for (int j=0; j<4; j++) { //loop for the columns

            std::cin >> matrix2[i][j]; //output value at position (i,j)
        }
    }

    //output matrices
    std::cout << "\nFirst matrix:\n";
    printMat(matrix1);
    std::cout << "\nSecond matrix:\n";
    printMat(matrix2);

    //multiplying the matrices 
    multiplyMatrices(matrix1, matrix2, result);

    //printing the results of the multiplication
    std::cout << "\nResults matrix:\n";
    printMat(result);

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

void multiplyMatrices(int mat1[4][4], int mat2[4][4], int (&res)[4][4]) {
    for (int i=0; i<4; i++) { //loop for the rows of res[][]
        
        for (int j=0; j<4; j++) { //loop for the columns of res[][]

            for (int k=0; k<4; k++) { //loop for the columns of mat1 and the rows of mat2
                res[i][j] = res[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }
}