// xtracredit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string house;
    const int SIZE = 20;
    int cells[SIZE] = {};
    int cellIter = 0;
    int westpoint = 0; //beginning of road
    int eastpoint = 100; //end of road


    //Randomly generate 20 numbers to act as distances from the westpoint to 20 houses
    srand((unsigned)time(0));
    int array[SIZE] = {};
    cout << "Unsorted House List of Distances from the Westpoint";
    cout << "\n";
    cout << "------------";
    cout << "\n";

    for (int i = 0; i < SIZE; i++) {
        array[i] = (rand() % (eastpoint-1)) + 1;
            cout << array[i];
            cout << ". ";
    }
    cout << "\n";

    int elems = (sizeof(array) / sizeof(array[0]));

    for (int pass = 0; pass < (elems - 1); pass++) {
        bool isSorted = false;
        for (int index = 0; index < (elems - 1 - pass); index++) {
            if (array[index] > array[index + 1]) {
                int temp = array[index];
                array[index] = array
                    [index + 1];
                array[index + 1] = temp;
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }
    }
    cout << "\n";
    cout << "Numerically Sorted House List of Distances from the Westpoint";
    cout << "\n";
    cout << "------------";
    cout << "\n";
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        cout << array[i];
        cout << ". ";
    }
    cout << "\n";

    int temp = 0;
    int curCell = array[0] + 4; //5 
    cells[0] = curCell;
    cellIter++;

    for (int i = 1; i < (sizeof(array) / sizeof(array[0])); i++) {
        int distanceForward = (array[i] + 4) - curCell;
        int distanceBack = (array[i] - 4) - curCell;
        if ((distanceForward <= 4 && distanceForward >= 0) || (distanceBack >= -4 && distanceBack <= 0)) {
        }
        else {
            curCell = array[i] + 4;
            cells[cellIter] = curCell;
            cellIter++;
        }
    }
    cout << "\n";
    cout << "Cell Base List of Distances from the Westpoint";
    cout << "\n";
    cout << "------------";
    cout << "\n";
    int totalBases = 0;
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        if (cells[i] != 0) {
            cout << cells[i];
            cout << ". ";
            totalBases++;
        } 
    }
    cout << "\n";
    cout << "\n";
    cout << "Total Bases";
    cout << "\n";
    cout << "------------";
    cout << "\n";
    cout << totalBases;
}