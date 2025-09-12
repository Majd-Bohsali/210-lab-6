// COMSC 210 | Lab 6 | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5; 
void enterArrayData(double* arr); 
void outputArrayData(double* arr);
double sumArray(double* arr);

int main() {
    double* arrPtr = new double[SIZE]; 
    enterArrayData(arrPtr); 
    outputArrayData(arrPtr);
    cout << "Sum of values: " << sumArray(arrPtr); 
    delete [] arrPtr; 
    return 0; 
}

// enterArrayData(double* arr) populates a dynamic double array with values from the console
// arguments: double* arr
// returns: None
void enterArrayData(double* arr) { 
    const int CHAR_SKIP = 100; 
    cout << "Data Entry for the array:" << endl; 
    for(int i = 0; i < SIZE; i++) { 
        cout << "\t > Element #" << i << ": "; 
        double a;
        cin >> arr[i];
        while (arr[i] == 0) {
            cout << "Invalid input, please enter a positive number: ";
            cin.clear();
            cin.ignore(CHAR_SKIP, '\n');
            cin >> arr[i]; 
        } 
        // clears any extra input
        cin.ignore(CHAR_SKIP, '\n');
    }
    cout << "Data Entry Complete." << endl;
}

// outputArrayData(double* arr) outputs content of dynamic double array to console 
// arguments: double* arr
// returns: None
void outputArrayData(double* arr) { 
    cout << "Outputting array elements: "; 
    for(int i = 0; i < SIZE; i++) { 
        cout << arr[i] << " ";
    }
    cout << endl; 
}

// sumArray(double* arr) calculates and returns the sum of the array
// arguments: double* arr
// returns: double for the sum of the array
double sumArray(double* arr) { 
    double sum = 0; 
    for(int i = 0; i < SIZE; i++) { 
        sum += arr[i];
    }
    return sum; 
}

