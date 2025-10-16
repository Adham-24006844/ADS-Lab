// Rotate matrix 90.cpp 
#include <iostream>
using namespace std;


int main()
{
    int mat[4][5] = { {1,2,3,4,5},
                      {6,7,8,9,10},
                      {11,12,13,14,15},
                      {16,17,18,19,20}
                    };

    int row = sizeof(mat) / sizeof(mat[0]); //4
    int col = sizeof(mat[0]) / sizeof(mat[0][0]); //5

    int** rotated = new int* [col]; // creates rotated[5]
    for (int i = 0; i < col; ++i) {
        rotated[i] = new int[row]; // populate rotated[i] with array[4] to create rotated[5][4]
    }


    for (int i = 0; i < col; i++) 
    {
        for (int j = 0; j < row; j++) 
        {
            rotated[i][j] = mat[j][col-1-i];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}


