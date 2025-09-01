/*
Given a 4x4 matrix, calculate the sum of the elements on the main diagonal (top right to bottom left) plus the sum of the elements on the secondary diagonal (bottom left to top right)
    e.g.
        1 2 3 4
        2 3 4 5 
        3 4 5 6
        4 5 6 7

        main diagonal = 1 + 3 + 5 + 7 = 16
        secondary diagonal = 4 + 4 + 4 + 4 = 16
        -> output = 32
*/

#include <iostream>

int diagonalSum(int mat[4][4]);
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
    std::cout << "\nMatrix:\n";
    printMat(matrix);

    //outputting sum of diagonals using diagonalSum()
    std::cout << "\nSum of the diagonals of this matrix is " << diagonalSum(matrix);

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

int diagonalSum(int mat[4][4]) {
    int main = 0;
    int secondary = 0;
    int mSpot = 0;
    int sSpot = 3;

    for (int i=0; i<4; i++) { //loop for the rows

        for (int j=0; j<4; j++) { //loop for the columns

            if (j==mSpot) { //if j is equal to mSpot, this index is along the main diagonal -> add value to main
                main += mat[i][j];
            }

            if (j==sSpot) { //if j is equal to sSpot, this index is along the secondary diagonal -> add value to secondary
                secondary += mat[i][j];
            }
        }

        //incrementing mSpot and decrementing sSpot to move to the next column in their diagonals
        mSpot++;
        sSpot--;
    }

    return main + secondary;
}