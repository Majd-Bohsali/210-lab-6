// COMSC 210 | Lab 6 | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5; 
void enterArrayData(double* arr); 
void outputArrayData(double* arr);

int main() {
    double* arrPtr = new double[SIZE]; 
    enterArrayData(arrPtr); 
    cout << "data 1: " << arrPtr[1]; 
    delete [] arrPtr; 
    return 0; 
}

// enterArrayData(double* arr) populates a dynamic double array with values from the console
// arguments: double* arr
// returns: None
void enterArrayData(double* arr) { 
    cout << "Data Entry for the array:" << endl; 
    for(int i = 0; i < SIZE; i++) { 
        cout << "\t > Element #" << i << ": "; 
        cin >> arr[i];
    }
}

// outputArrayData(double* arr) ouputs content of dynamic double array to console 
// arguments: double* arr
// returns: None
void outputArrayData(double* arr) { 

}