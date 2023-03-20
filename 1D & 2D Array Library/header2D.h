#ifndef HEADER2D_H_INCLUDED
#define HEADER2D_H_INCLUDED

using namespace std;

void print2DArray(int array[][100], int row, int col) {
    cout << "2D Array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void reversePrint2DArray(int array[][100], int row, int col) {
    cout << "Reverse 2D Array:" << endl;
    for (int i = row - 1; i >= 0; i--) {
        for (int j = col - 1; j >= 0; j--) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void input2DArray(int array[][100], int row, int col) {
    cout << "Input 2D Array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter element at (" << i<< "," << j << ") index: ";
            cin >> array[i][j];
        }
    }
}

bool searchIn2DArray(int array[][100], int row, int col, int searchKey) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (array[i][j] == searchKey) {
                cout << "Found " << searchKey << " at " << "index (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    cout << searchKey << " not found in 2D array." << endl;
    return false;
}

int findMax2DArray(int array[][100], int row, int col) {
    int maxVal = array[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (array[i][j] > maxVal) {
                maxVal = array[i][j];
            }
        }
    }
    return maxVal;
}

int findMin2DArray(int array[][100], int row, int col) {
    int minVal = array[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (array[i][j] < minVal) {
                minVal = array[i][j];
            }
        }
    }
    return minVal;
}

void copy2DArray(int sourceArray[][100], int destinationArray[][100], int row, int col) {
    cout << "Copying values from source 2D array to destination 2D array..." << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            destinationArray[i][j] = sourceArray[i][j];
        }
    }
    cout << "Values copied successfully!" << endl;
}

#endif // HEADER2D_H_INCLUDED
