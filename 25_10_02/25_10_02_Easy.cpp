//Link to Question
//https://www.geeksforgeeks.org/dsa/print-matrix-snake-pattern

#include <iostream>
using namespace std;

int main()
{
    int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50} };
    
    int row = sizeof(mat) / sizeof(mat[0]);
    int col = sizeof(mat[0]) / sizeof(mat[0][0]);

    int* arr = new int[row*col];

    int index = 0;
    for (int row = 0; row < 4; row++) 
    {
        for (int col = 0; col < 4; col++) 
        {
            arr[index] = mat[row][col];
            index++;
        }
    }

    int printIndex = 3;
    bool flipped = false;
    for (int i = 0; i < 16; i++) 
    {
       if (flipped)
       {
           cout << arr[i+printIndex] << " ";
           printIndex -= 2;
           if ((i + 1) % 4 == 0)
               flipped = false;
       }
       else
       {
           cout << arr[i] << " ";
           if ((i+1) % 4 == 0) 
           {
                flipped = true;
                printIndex = 3;
           }
       }
    }
}