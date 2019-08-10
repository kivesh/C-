#include <iostream>

using namespace std;

void printArray(int arrayPrint[3][3], int rows,int cols);
int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printArray(matrix, 3, 3);
    return 0;
}

void printArray(int arrayPrint[3][3], int rows,int cols)
{
    for(int row = 0; row< rows;row++)
    {
        for(int col =0; col< cols; col++)
        {
            cout << arrayPrint[row][col] << "\t";
        }
        cout << "\n" ;
    }
}
