#ifndef HEADER1D_H_INCLUDED
#define HEADER1D_H_INCLUDED

using namespace std;

void print1DArray(int array[], int size) {
    cout << "1D Array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void reversePrint1DArray(int array[], int size) {
    cout << "Reverse 1D Array:" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void input1DArray(int array[], int size) {
    cout << "Input 1D Array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element at " << i << " index: ";
        cin >> array[i];
    }
}

bool searchIn1DArray(int array[], int size, int searchKey) {
    for (int i = 0; i < size; i++) {
        if (array[i] == searchKey) {
            cout << "Found " << searchKey << " at " << "index " << i << endl;
            return true;
        }
    }
    cout << searchKey << " not found in 1D array." << endl;
    return false;
}

int findMax1DArray(int array[], int size) {
    int maxVal = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

int findMin1DArray(int array[], int size) {
    int minVal = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

void copy1DArray(int sourceArray[], int destinationArray[], int size) {
    cout << "Copying values from source 1D array to destination 1D array..." << endl;
    for (int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[i];
    }
    cout << "Values copied successfully!" << endl;
}

void sort1DArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[i]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

#endif // HEADER1D_H_INCLUDED
