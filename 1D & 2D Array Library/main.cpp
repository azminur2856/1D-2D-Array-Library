#include <iostream>
#include "header1D.h"
#include "header2D.h"

using namespace std;

int main()
{
    //for 1D array
    cout << "Output for 1D Array" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    int size;
    cout << "Enter Array Size: ";
    cin >> size;
    cout << endl;

    int array[size];

    cout << "c." << endl;
    input1DArray(array, size);
    cout << endl;

    cout << "a." << endl;
    print1DArray(array, size);
    cout << endl;

    cout << "b." << endl;
    reversePrint1DArray(array, size);
    cout << endl;

    cout << "d. \nEnter the search key: ";
    int searchKey;
    cin >> searchKey;
    int searchResult = searchIn1DArray(array, size, searchKey);
    cout << endl;

    cout << "e." << endl;
    int maxVal = findMax1DArray(array, size);
    cout << "Maximum value in array: " << maxVal << endl;
    cout << endl;

    cout << "f." << endl;
    int minVal = findMin1DArray(array, size);
    cout << "Minimum value in array: " << minVal << endl;
    cout << endl;

    cout << "g." << endl;
    int copy[size];
    copy1DArray(array, copy, size);
    cout << "Copy of ";
    print1DArray(copy, size);
    cout << endl;

    cout << "h." << endl;
    sort1DArray(array, size);
    cout << "Sorted ";
    print1DArray(array, size);
    cout << endl;
    cout << endl;


    //for 2D array
    cout << "Output for 2D Array" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    int row;
    cout << "Enter Row: ";
    cin >> row;
    int col;
    cout << "Enter Column: ";
    cin >> col;
    cout << endl;

    int array2D[row][100];

    cout << "c." << endl;
    input2DArray(array2D, row, col);
    cout << endl;

    cout << "a." << endl;
    print2DArray(array2D, row, col);
    cout << endl;

    cout << "b." << endl;
    reversePrint2DArray(array2D, row, col);
    cout << endl;

    cout << "d. \nEnter the search key: ";
    int searchKey2D;
    cin >> searchKey2D;
    searchIn2DArray(array2D, row, col, searchKey2D);
    cout << endl;

    cout << "e." << endl;
    int maxVal2d = findMax2DArray(array2D, row, col);
    cout << "Maximum value in array: " << maxVal2d << endl;
    cout << endl;

    cout << "f." << endl;
    int minVal2d = findMin2DArray(array2D, row, col);
    cout << "Minimum value in array: " << minVal2d << endl;
    cout << endl;

    cout << "g." << endl;
    int copy2D[row][100];
    copy2DArray(array2D, copy2D, row, col);
    cout << "Copy of ";
    print2DArray(array2D, row, col);
    cout << endl;
    cout << endl;


    //Information
    cout << "Name    : AZMINUR RAHMAN" << endl;
    cout << "ID      : 22-46588-1" << endl;
    cout << "Course  : DATA STRUCTURE LAB" << endl;
    cout << "Section : M" << endl;
    cout << "Semester: 2022-2023, Spring" << endl;

    return 0;
}
